/* Ghidra address: 01696500 */
/* Ghidra symbol: FUN_01696500 */


void FUN_01696500(longlong param_1)

{
  char cVar1;
  undefined1 auStack_158 [40];
  undefined1 local_130 [256];
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + -1;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  FUN_00416780(local_20,*(undefined2 *)(param_1 + 0x30));
  FUN_01696200(param_1,1);
  do {
    cVar1 = FUN_00c535d0(*(undefined2 *)(param_1 + 0x30));
    if (cVar1 == '\0') {
      cVar1 = FUN_00c53600(*(undefined2 *)(param_1 + 0x30));
      if (cVar1 == '\0') {
        cVar1 = FUN_01696470(auStack_158,*(undefined2 *)(param_1 + 0x30));
        if (cVar1 == '\0') {
          if ((*(int *)(param_1 + 0x318) == 0) || (*(int *)(param_1 + 0x318) == 3)) {
            cVar1 = FUN_01695bf0(param_1,local_20[0],&local_24);
            if (cVar1 == '\0') {
              FUN_00416910(local_130,local_20[0],0xff);
              FUN_00415020(param_1 + 0x40,local_130,0x50);
              FUN_00c53280(*(undefined8 *)(param_1 + 0x38),local_20[0],param_1 + 0x20);
            }
            else {
              FUN_00c53360(*(undefined8 *)(param_1 + 0x38),local_20[0],local_24,param_1 + 0x20);
            }
          }
          else {
            cVar1 = FUN_01695bf0(param_1,local_20[0],&local_24);
            if ((cVar1 == '\0') || (*(short *)(param_1 + 0x30) != 0x28)) {
              FUN_00416910(local_130,local_20[0],0xff);
              FUN_00415020(param_1 + 0x40,local_130,0x50);
              FUN_00c53280(*(undefined8 *)(param_1 + 0x38),local_20[0],param_1 + 0x20);
            }
            else {
              FUN_00c53360(*(undefined8 *)(param_1 + 0x38),local_20[0],local_24,param_1 + 0x20);
            }
          }
          FUN_00414480(&local_30);
          FUN_00414480(local_20);
          return;
        }
      }
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0x30));
    FUN_00416ad0(local_20,local_30);
    FUN_01696200(param_1,1);
  } while( true );
}

