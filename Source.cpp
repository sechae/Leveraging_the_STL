void reverseOrder(vector<int>& car) {
	int a = car.size();
	int t;
	for (int i = 0; i < a; i++) {
		for (j = 1; j <= a; j++) {
			if (car[i] < car[j]) {
				t = car[i];
				car[i] = car[j];
				car[j] = t;
			}
		}
	}
	for (int k = 0; k < a; k++) {
		cout << car[i] << endl;
	}
}

vector<int> sequence(vector<int> array) {
	sort(array.begin(), array.end());
	int a = array.size();
	vector<int> ans(n);
	int i = 0, j = a - 1;
	int k = 0;
	while (i <= j) {
		ans[i] = array[k];
		i++; k++;
		if (i < j) {
			ans[j] = array[k];
			j--; k++;
		}
	}
	return ans;
}

void avgPrice(vector<int>& list) {
	int sum, avg_price = 0, price_range = 0;
	int total = list.size();
	for (auto it = list.begin(); it != list.end(); it++) {
		sum += list[it];
	}
	avg_price = sum / total;
	price_range = (list.begin() + list.end() - 1) / 2;
	cout << avg_price << " ,"
}

bool isPrime(int a) {
	bool A = true;

	if (a == 0 || a == 1) {
		A = false;
	}
	else {
		for (int i = 2; i <= a / 2; ++i) {
			if (a % i == 0) {
				A = false;
				break;
			}
		}
	}
}

bool primeSearcher(vector<int> array) {
	int a = array.size();
	for (auto i : array) {
		if (isPrime(i)) {
			return true;
		}
	}
	return false;
}

for (auto& a : cars) {
	if (a.price() < 10000 || a.vin()[0] - 'F' <= 0) {
		Tag<Car>* t = new Tag<Car>(true, a);
		taggedCars.push_back(*t);
	}
	else {
		Tag<Car>* t = new Tag<Car>(false, a);
		taggedCars.push_back(*t);
	}
}
queue<tag<Car>> A, B;
for (int i = 0; i < taggedCars.size(); i++) {
	if (taggedCars[i].isTagged()) {
		A.push(taggedCars[i]);
	}
	else B.push(taggedCars[i]);
}

taggedCars.clear();
while (!A.empty()) {
	auto tmp = A.front();
	taggedCars.push_back(tmp);
	A.pop();
}

while (!B.empty()) {
	auto tmp = B.front();
	taggedCars.push_back(tmp);
	B.pop();
}