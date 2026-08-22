//! `LLM` auto-test and Ollama download dialog state machines.

pub mod auto_test;
pub mod ollama_download;

use std::future::Future;
use std::pin::Pin;

pub type BackendFuture<'a, T> = Pin<Box<dyn Future<Output = T> + Send + 'a>>;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BackendError(pub String);

impl std::fmt::Display for BackendError {
    fn fmt(&self, formatter: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        formatter.write_str(&self.0)
    }
}

impl std::error::Error for BackendError {}
