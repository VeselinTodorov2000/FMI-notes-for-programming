#  Класове

## Задача 1

Да се дефинира клас Time, който определя момент от
денонощието по зададени час и минути. Класът да съдържа подходящи
методи за:

• достъп и промяна на часа и минутите с проверки за коректност;

• добавящ към времето цяло число минути;

• достъп до боря минути, изминали от началото на денонощието;

• оператор за сравнение (казваме, че t1 < t2, ако t2 е по-късно в
денонощието от t1).

Да се предефинират операторите +, - и *, така че да могат да се събират и изваждат две времена, както и да се умножават време с цяло
число и цяло число с време. Да се включи дефинираният клас в програма и направят обръщения към член-функциите му и предефинираните
оператори.

## Задача 2

Да се дефинира структура Point, описваща точка в евклидовата равнина
и клас Line, описващ права в евклидовата равнина, зададена чрез две
нейни точки.

Класът Line да съдържа методи, чрез които може да се извършват след-
ните операции:

• Проверка дали две прави са успоредни;

• Проверка дали дадена точка лежи на дадена права;

• Намиране на пресечната точка на две прави. Приемаме, че правите
не са успоредни. Стойността на резултата може да е произволна в
противен случай.

• Създаване на права, която е ъглополовяща на по-големия ъгъл,
образуван от две прави. Стойността на резултата може да е произ-
волна в противен случай.

Където е подходящо да се дефинират оператори вместо методи.

## Задача 3

Да се дефинира клас Dictionary,

който създава тълковен речник. Тълковният речник се състои от не по-
вече от 500 двойки дума–тълкувание, като думата е символен низ с не

повече от 100 символа, а тълкованието е символен низ с не повече от 500
символа.

• Да се дефинира подходяща структура, описваща една двойка дума-
тълкувание;

• Да се дефинират подходящи член-данни на клас Dictionary;
Клас Dictionary да съдържа методи, с които може да се извършват
следните операции над речника:

• Инициализация на празен речник;

• извеждане на всички думи в речника и техните тълкувания;

• включване на нова двойка дума–тълкуване в речника;

• изключване на двойка дума–тълкуване от речника (по дадена дума);

• търсене на значението на дадена дума в речник.

• извеждане на всички думи в речника и техните тълкувания по азбучен ред на думите;

Да се дефинира оператор +, обединяващ два речника, такъв че:
• Ако някои думи имат значение и в двата речника, значенията да
се конкатенират в резултатния сумарен речник;
• Ако общият брой на думите в двата речника надхвърля 500, да се
използват само първите 500 думи (при произволна наредба).
