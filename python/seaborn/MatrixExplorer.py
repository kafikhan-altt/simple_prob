import seaborn as sns
import matplotlib.pyplot as plt

# Load a classic multi-variable dataset
penguins = sns.load_dataset("penguins")

# Set a clean aesthetic style
sns.set_theme(style="whitegrid")

# Create a comprehensive grid segmented by species
sns.pairplot(data=penguins, hue="species", palette="muted")

plt.show()
