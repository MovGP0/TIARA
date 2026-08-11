/* Ghidra address: 01538c10 */
/* Ghidra symbol: FUN_01538c10 */


void FUN_01538c10(longlong *param_1,undefined1 *param_2,double *param_3,double *param_4,
                 double *param_5,undefined8 *param_6)

{
  short sVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  double *pdVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_49;
  longlong local_48;
  undefined1 local_3a;
  undefined1 local_39 [17];
  
  if (param_1 != (longlong *)0x0) {
    sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((sVar1 == 0xe) || (sVar1 == 0xd)) {
      *param_2 = 0;
      *param_3 = 0.0;
      *param_4 = 0.0;
      *param_5 = 0.0;
      puVar2 = (undefined8 *)FUN_01cfde70(param_1,1,0,local_39,&local_3a,&local_49);
      *param_6 = *puVar2;
    }
    if (((((sVar1 == 0xf) || (sVar1 == 0x10)) || (sVar1 == 0xd9)) ||
        ((sVar1 == 0xda || (sVar1 == 0xa4)))) || ((sVar1 == 0xa6 || (sVar1 == 0xa7)))) {
      puVar2 = (undefined8 *)FUN_01cfde70(param_1,1,0,local_39,&local_3a,&local_49);
      *param_6 = *puVar2;
      FUN_01cfde70(param_1,2,0,local_39,&local_3a,&local_49);
      (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_48);
      uVar3 = (ulonglong)local_49;
      if (uVar3 < 6) {
        if (uVar3 == 5) {
          *param_2 = 3;
          pdVar4 = (double *)FUN_01cfde70(param_1,2,1,local_39,&local_3a,&local_49);
          *param_3 = *pdVar4;
          pdVar4 = (double *)FUN_01cfde70(param_1,2,2,local_39,&local_3a,&local_49);
          *param_4 = *pdVar4;
          *param_5 = 0.0;
          return;
        }
        if (uVar3 == 1) {
          *param_2 = 4;
          pdVar4 = (double *)FUN_01cfde70(param_1,2,1,local_39,&local_3a,&local_49);
          *param_3 = *pdVar4;
          return;
        }
        if (uVar3 == 2) {
          pdVar4 = (double *)FUN_01cfde70(param_1,2,1,local_39,&local_3a,&local_49);
          *param_3 = *pdVar4;
          if (*param_3 == 0.0) {
            *param_2 = 0;
            return;
          }
          *param_2 = 4;
          return;
        }
        if (uVar3 == 3) {
          *param_2 = 4;
          puVar2 = *(undefined8 **)(local_48 + 1);
          dVar5 = (double)puVar2[2] + (double)puVar2[3] + (double)puVar2[4] + (double)puVar2[5] +
                  (double)puVar2[6] + (double)puVar2[7];
          if (1e-30 < dVar5) {
            *param_4 = 1.0 / dVar5;
          }
          uVar6 = FUN_0040c850(*puVar2);
          uVar7 = FUN_0040c850(*puVar2);
          dVar5 = (double)FUN_00b90620(uVar6,uVar7);
          *param_3 = dVar5;
          return;
        }
        if (uVar3 != 4) {
          return;
        }
      }
      else {
        if (uVar3 == 6) {
          *param_2 = 2;
          pdVar4 = (double *)FUN_01cfde70(param_1,2,1,local_39,&local_3a,&local_49);
          *param_3 = *pdVar4;
          pdVar4 = (double *)FUN_01cfde70(param_1,2,2,local_39,&local_3a,&local_49);
          *param_4 = *pdVar4;
          *param_5 = 0.0;
          return;
        }
        if (uVar3 != 7) {
          if (uVar3 == 8) {
            *param_2 = 4;
            if (*(double *)(local_48 + 0x11) <= 1e-30) {
              return;
            }
            *param_4 = 1.0 / *(double *)(local_48 + 0x11);
            return;
          }
          if (2 < uVar3 - 9) {
            return;
          }
          *param_2 = 4;
          return;
        }
      }
      *param_2 = 1;
      pdVar4 = (double *)FUN_01cfde70(param_1,2,1,local_39,&local_3a,&local_49);
      *param_3 = *pdVar4;
      pdVar4 = (double *)FUN_01cfde70(param_1,2,2,local_39,&local_3a,&local_49);
      *param_4 = *pdVar4;
      pdVar4 = (double *)FUN_01cfde70(param_1,2,3,local_39,&local_3a,&local_49);
      *param_5 = *pdVar4;
      *param_5 = *param_5 + 90.0;
    }
    else if (sVar1 == 100) {
      *param_2 = 1;
      *param_3 = 1.0;
      pdVar4 = (double *)FUN_01cfde70(param_1,1,0,local_39,&local_3a,&local_49);
      *param_4 = *pdVar4;
      pdVar4 = (double *)FUN_01cfde70(param_1,5,0,local_39,&local_3a,&local_49);
      *param_5 = *pdVar4;
      puVar2 = (undefined8 *)FUN_01cfde70(param_1,4,0,local_39,&local_3a,&local_49);
      *param_6 = *puVar2;
    }
    else if ((sVar1 == 0x3e) || (sVar1 == 0x3e)) {
      *param_2 = 1;
      pdVar4 = (double *)FUN_01cfde70(param_1,1,0,local_39,&local_3a,&local_49);
      *param_3 = *pdVar4;
      pdVar4 = (double *)FUN_01cfde70(param_1,2,0,local_39,&local_3a,&local_49);
      *param_4 = *pdVar4;
      *param_5 = 0.0;
      *param_6 = 0;
    }
  }
  return;
}

