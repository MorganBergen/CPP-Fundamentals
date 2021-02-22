# Help for Extra Credit - Python Version

import re


sentence = 'Hello. I say, what a lovely day: unusally weather, "Yo Adrian!"'

words = [w for w in re.split('\.| |,|;|"|!', sentence) if w]
print(words)

