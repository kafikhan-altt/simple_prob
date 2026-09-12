import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt

data = np.random.randint(1, 100, (12, 7))

sns.heatmap(
    data,
    annot=True,
    fmt="d",
    cmap="magma",
    linewidths=0.5
)

plt.xlabel("Days")
plt.ylabel("Months")
plt.title("Monthly Activity Heatmap")
plt.show()