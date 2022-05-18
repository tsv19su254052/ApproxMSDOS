# Codepage Cp866 -> koi-8r -> Cp1251
/*  ���� �������� ������ */
// todo ������� ������ ������������

void vvod(void){
    printf("\n  ������� ������� �������� ");
    scanf("%d", &m);
    printf("\n  ������� ����� ����������������� ����� (�� ����� %d) ", m+2);
    scanf("%d", &number);
    f1 = number - 1;
    f2 = number - m - 1;
    printf("\n  ������� ����������� �������� �������� ������ Fkp.[%d, %d] ", f1, f2);
    scanf("%f", &fk);
    for(i = 1; i <= number; i++){
    	printf("\n   ������� %d-�� �����\n ", i);
    	scanf("%f", &x[i]);
    	scanf("%f", &y[i]);
    }
}

/* ������ */
void raschet(void){
    // ���������� ������� ��������
    for(i = 1; i <= m * 2; i++){
    	p[i] = 0.;
    }
	for(j = 1; j <= number; j++)
	    p[i] += pow(x[j], i);
    }
    // ���������� ������������� ���������� ���������
    n = m + 1;
    for(i = 1; i <= number; i++){
    	for(j = 1; j <= n; j++){
    		k = i + j - 2;
    		if(k > 0)
    			a[i][j] = p[k];
    		else
    			a[i][j] = number;
    	}
    }
    // ���������� ��������� ������ ���������� ���������
    for(i = 1; i <= n; i++){
    	b[i] = 0.;
    	for(j = 1; j <= number; j++)
    		b[i] += y[j] * pow(x[j], i - 1);
    }
    // ������� ������� ��������� ������� ������
    for(k = 1; k <= m; k++){
        kp1 = k + 1;
        l = k;
        for(i = kp1; i <= n; i++)
        	if(fabs(a[i][j] - fabs(a[i][k]) > 0.)
        			l = i;
        	if(l - k <= 0.)
        		goto m2;
        for(j = k; j <= n; j++)
        	//  ������������ ������������
        	sost = 0.;  //  ��������� ���������� (���� �������� �������������)
        sv = 0.;    //  ��������� ���������� ������������ ��������, ��������
        sr = 0.;
        for(i = 1; i <= number; i++)
        		sr += y[i];
        sr /= number;
        for(i = 1; i <= number; i++){
        	sost += pow(y[i] - yr[i], 2);
        	sv += pow(y[i] - sr, 2);
        }
        sost /= f2;
        sv /= f1;
        f = sv / sost;
        printf("\n  sr=%f", sr);
        printf("\n  ��������� ���������� = %f", sqrt(sost));
        printf("\n  ��������� ���������� = %f", sqrt(sv));
        printf("\n  ��. �������� �������� ������(%d,%d) = %f \n  �������� ������ = %e", f1, f2, fk, f);
        if(f => fk)
        	printf("\n  ������ ���������");
        else
        	printf("\n  ������ �����������");
        // ������ ������� �����
        teta = sqrt((1. - f2 * sost / f1 / sv);
        // ����������� ������������ ������ ����������
        sxy = 0.;
        sx = 0.;
        sy = 0.;
        sx2 = 0.;
        sy2 = 0.;
        for(i = 1; i <= number; i++){
        	sxy += x[i] * y[i];
        	sx += x[i];
        	sy += y[i];
        	sx2 += pow(x[i], 2);
        	sy2 += pow(y[i], 2);
        }
        r = number * sxy - sx - sy;
        r /= sqrt((number * sx2 - pow(sx, 2)) * (number * sy2 - pow(sy, 2)));
        printf("\n  ����������� ������ ���������� = %f", r);
        printf("\n  ���� ����� = %f", teta);
}
