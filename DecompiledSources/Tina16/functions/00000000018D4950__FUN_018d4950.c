/* Ghidra address: 018d4950 */
/* Ghidra symbol: FUN_018d4950 */


void FUN_018d4950(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_018d4280(*(undefined8 *)(param_1 + 0x220));
  *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x220) + 0x28);
  *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(*(longlong *)(param_1 + 0x220) + 0x2c);
  *(undefined1 *)(lVar2 + 0x14) = *(undefined1 *)(*(longlong *)(param_1 + 0x220) + 0x30);
  *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(*(longlong *)(param_1 + 0x220) + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(*(longlong *)(param_1 + 0x220) + 0xc);
  *(undefined1 *)(lVar2 + 0x1e) = *(undefined1 *)(*(longlong *)(param_1 + 0x220) + 0x31);
  *(undefined1 *)(lVar2 + 0x1f) = *(undefined1 *)(*(longlong *)(param_1 + 0x220) + 0x44);
  if (*(char *)(*(longlong *)(param_1 + 0x220) + 8) == '\0') {
    *(undefined1 *)(lVar2 + 0x1c) = 1;
  }
  else {
    lVar3 = FUN_018d42f0(*(undefined8 *)(param_1 + 0x220));
    if (lVar3 == 0) {
      if (((*(char *)(*(longlong *)(param_1 + 0x220) + 0x30) ==
            *(char *)(*(longlong *)(param_1 + 0x220) + 0x1c)) &&
          (*(int *)(*(longlong *)(param_1 + 0x220) + 0x10) ==
           *(int *)(*(longlong *)(param_1 + 0x220) + 0x14))) &&
         (*(int *)(*(longlong *)(param_1 + 0x220) + 0x2c) ==
          *(int *)(*(longlong *)(param_1 + 0x220) + 0x18))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)(lVar2 + 0x1c) = uVar1;
    }
    else {
      if (((*(char *)(*(longlong *)(param_1 + 0x220) + 0x30) == *(char *)(lVar3 + 0x14)) &&
          (*(int *)(*(longlong *)(param_1 + 0x220) + 0x10) == *(int *)(lVar3 + 0x18))) &&
         ((*(int *)(*(longlong *)(param_1 + 0x220) + 0x2c) == *(int *)(lVar3 + 0xc) &&
          ((*(int *)(*(longlong *)(param_1 + 0x220) + 0xc) == *(int *)(lVar3 + 0x10) &&
           (*(char *)(*(longlong *)(param_1 + 0x220) + 0x31) == *(char *)(lVar3 + 0x1e))))))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)(lVar2 + 0x1c) = uVar1;
    }
  }
  *(bool *)(lVar2 + 0x1d) =
       *(int *)(*(longlong *)(param_1 + 0x220) + 0x2c) !=
       *(int *)(*(longlong *)(param_1 + 0x220) + 0x18);
  return;
}

