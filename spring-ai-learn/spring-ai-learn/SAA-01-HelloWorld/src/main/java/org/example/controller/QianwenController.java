package org.example.controller;

import jakarta.annotation.Resource;
import org.springframework.ai.chat.model.ChatModel;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;
import reactor.core.publisher.Flux;

@RestController
public class QianwenController {
	@Resource
	private ChatModel chatModel;

	@GetMapping("/chat/do")
	public String doChat(@RequestParam(value = "msg", defaultValue = "你是谁")
	String message) {
		return chatModel.call(message);
	}

	@GetMapping("/chat/stream")
	public Flux<String> streamChat(@RequestParam(value = "msg", defaultValue = "你是谁")
	String message) {
		return chatModel.stream(message);
	}
}
