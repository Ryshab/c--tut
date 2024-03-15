import openai

openai_key = ''
model_engine = "text_davinci_003"
prompt=str(input())
completion = openai.Completion.create(engine=model_engine , prompt = prompt, max_token=1024, stop = None, temperature=0.5)
response = completion.choices[0].txt

print(response)
