/* Ghidra address: 0177fc20 */
/* Ghidra symbol: FUN_0177fc20 */


void FUN_0177fc20(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_40 [2];
  undefined1 local_2c [4];
  undefined8 local_28;
  short *local_20 [2];
  
  local_40[0] = 0;
  local_20[0] = (short *)0x0;
  local_28 = 0;
  FUN_00414b50(local_20,param_1);
  iVar3 = -1;
  if ((local_20[0] != (short *)0x0) && (*local_20[0] != 0x2a)) {
    FUN_00416e20(local_20,1,1);
    if (*local_20[0] == 0x20) {
      FUN_0177f180(local_20);
      while ((local_20[0] != (short *)0x0 && (iVar3 < 4))) {
        FUN_00414480(&local_28);
        while (local_20[0] != (short *)0x0) {
          cVar1 = FUN_0177f090(*local_20[0]);
          if (cVar1 == '\0') {
            cVar1 = FUN_0177f0b0(*local_20[0]);
            if (cVar1 == '\0') break;
          }
          FUN_00416780(local_40,*local_20[0]);
          FUN_00416ad0(&local_28,local_40[0]);
          FUN_00416e20(local_20,1,1);
        }
        iVar3 = iVar3 + 1;
        FUN_0177f180(local_20);
        if (iVar3 == 0) {
          uVar2 = FUN_0040e860(local_28,local_2c);
          *param_2 = uVar2;
        }
      }
      FUN_0177f180(local_20);
      FUN_00414ad0(param_3,local_20[0]);
    }
  }
  FUN_00414480(local_40);
  FUN_00414560(&local_28,2);
  return;
}

