#define uS_TO_S_FACTOR 1000000
#define mS_TO_S_FACTOR 1000

class Time
{
public:
    int uSeconds(int s)
    {
        return s * uS_TO_S_FACTOR;
    }

    int uMinutes(int min)
    {
        return seconds(min * 60);
    }

    int uHours(int hrs)
    {
        return minutes(hrs * 60);
    }

    int uDays(int days)
    {
        return hours(days * 24);
    }

    int uWeeks(int weeks)
    {
        return days(days * 7);
    }

    int uMonths(int months)
    {
        return days(months * 30.5);
    }
    int uYears(int years)
    {
        return days(years * 365);
    }

    int mSeconds(int s)
    {
        return s * mS_TO_S_FACTOR;
    }

    int mMinutes(int min)
    {
        return seconds(min * 60);
    }

    int mHours(int hrs)
    {
        return minutes(hrs * 60);
    }

    int mDays(int days)
    {
        return hours(days * 24);
    }

    int mWeeks(int weeks)
    {
        return days(days * 7);
    }

    int mMonths(int months)
    {
        return days(months * 30.5);
    }
    int mYears(int years)
    {
        return days(years * 365);
    }
}