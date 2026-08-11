/* Ghidra address: 01662210 */
/* Ghidra symbol: FUN_01662210 */


void FUN_01662210(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
LAB_01662219:
  *(undefined1 *)(param_1 + 0xd8) = 0;
  FUN_0040d200(param_1 + 0x50,0x80,0);
  *(undefined1 *)(param_1 + 200) = 1;
  FUN_004d1e40(param_1);
  do {
    iVar1 = 0;
    while (*(int *)(*(longlong *)(param_1 + 0xd0) + 0xa4) <= *(int *)(param_1 + 0xb0)) {
      iVar1 = iVar1 + 1;
      if (*(char *)(param_1 + 0xd8) != '\0') goto LAB_01662219;
      if (*(char *)(param_1 + 0x1a) != '\0') {
        return;
      }
      if (iVar1 == 100000000) {
        FUN_004d1e40(param_1);
        if (*(char *)(param_1 + 0xd8) != '\0') goto LAB_01662219;
        if (*(char *)(param_1 + 0x1a) != '\0') {
          return;
        }
      }
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0xa4) - *(int *)(param_1 + 0xb0);
    if (iVar1 == 1) {
      (**(code **)(param_1 + 0x60))();
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      FUN_016621a0(*(undefined8 *)(param_1 + 0xd0),param_1 + 0x50);
    }
    else if (iVar1 == 2) {
      uVar2 = FUN_016ef6b0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x130),
                           *(undefined4 *)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0xc0) = uVar2;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 2;
    }
  } while( true );
}

