/* Ghidra address: 0165ddf0 */
/* Ghidra symbol: FUN_0165ddf0 */


void FUN_0165ddf0(longlong param_1,undefined8 param_2,int param_3,longlong param_4,
                 undefined4 param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    lVar2 = 0;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 400) + -8);
    }
    if (lVar2 <= *(int *)(param_1 + 0x198)) {
      FUN_00419260(param_1 + 400,&DAT_0165b8b0,1,(longlong)(*(int *)(param_1 + 0x198) * 2 + 100));
    }
    FUN_00409a70(param_2,*(longlong *)(param_1 + 400) + (longlong)*(int *)(param_1 + 0x198) * 0x40,8
                );
    if (*(char *)(param_4 + 0x110) == '\0') {
      *(undefined8 *)(*(longlong *)(param_1 + 400) + 8 + (longlong)*(int *)(param_1 + 0x198) * 0x40)
           = 0;
    }
    else {
      FUN_00409a70(param_4 + 0x98,
                   *(longlong *)(param_1 + 400) + 8 + (longlong)*(int *)(param_1 + 0x198) * 0x40,8);
    }
    *(longlong *)(*(longlong *)(param_1 + 400) + 0x10 + (longlong)*(int *)(param_1 + 0x198) * 0x40)
         = param_4;
    *(int *)(*(longlong *)(param_1 + 400) + 0x18 + (longlong)*(int *)(param_1 + 0x198) * 0x40) =
         param_3;
    *(undefined4 *)
     (*(longlong *)(param_1 + 400) + 0x1c + (longlong)*(int *)(param_1 + 0x198) * 0x40) = param_5;
    *(undefined1 *)
     (*(longlong *)(param_1 + 400) + 0x38 + (longlong)*(int *)(param_1 + 0x198) * 0x40) = 0;
    if (param_3 == 1) {
      uVar1 = FUN_0165dd10(param_1,*(undefined8 *)
                                    (*(longlong *)(param_1 + 400) + 8 +
                                    (longlong)*(int *)(param_1 + 0x198) * 0x40));
      *(undefined1 *)
       (*(longlong *)(param_1 + 400) + 0x38 + (longlong)*(int *)(param_1 + 0x198) * 0x40) = uVar1;
    }
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}

