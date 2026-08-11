/* Ghidra address: 0177fa80 */
/* Ghidra symbol: FUN_0177fa80 */


void FUN_0177fa80(undefined8 param_1,longlong param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_30 [2];
  undefined1 local_1c [4];
  undefined8 local_18;
  short *local_10;
  
  local_30[0] = 0;
  local_10 = (short *)0x0;
  local_18 = 0;
  FUN_00414b50(&local_10,param_1);
  *param_3 = -1;
  if ((local_10 != (short *)0x0) && (*local_10 != 0x2a)) {
    FUN_00416e20(&local_10,1,1);
    if (*local_10 == 0x20) {
      FUN_0177f180(&local_10);
      do {
        do {
          if (local_10 == (short *)0x0) goto LAB_0177fbd3;
          FUN_00414480(&local_18);
          while (local_10 != (short *)0x0) {
            cVar1 = FUN_0177f090(*local_10);
            if (cVar1 == '\0') {
              cVar1 = FUN_0177f0b0(*local_10);
              if (cVar1 == '\0') break;
            }
            FUN_00416780(local_30,*local_10);
            FUN_00416ad0(&local_18,local_30[0]);
            FUN_00416e20(&local_10,1,1);
          }
          *param_3 = *param_3 + 1;
          uVar2 = FUN_0040e860(local_18,local_1c);
          *(undefined4 *)(param_2 + (longlong)*param_3 * 4) = uVar2;
          FUN_0177f180(&local_10);
          if (local_10 == (short *)0x0) goto LAB_0177fbd3;
          cVar1 = FUN_0177f090(*local_10);
        } while (cVar1 != '\0');
        cVar1 = FUN_0177f0b0(*local_10);
      } while (cVar1 != '\0');
    }
  }
LAB_0177fbd3:
  FUN_00414480(local_30);
  FUN_00414560(&local_18,2);
  return;
}

