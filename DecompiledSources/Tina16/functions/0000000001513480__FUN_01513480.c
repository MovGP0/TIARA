/* Ghidra address: 01513480 */
/* Ghidra symbol: FUN_01513480 */


void FUN_01513480(longlong param_1,undefined8 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  char cVar2;
  double dVar3;
  undefined1 local_99 [81];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  double local_38;
  double local_30;
  
  uVar1 = *(undefined8 *)(param_1 + 0x9b0);
  if (*(char *)(param_1 + 0x7a8) == '\x04') {
    cVar2 = FUN_010e8310(uVar1,1,local_99,&local_30,local_40,local_48);
    if (cVar2 != '\0') {
      cVar2 = FUN_010e8310(uVar1,0,local_99,&local_38,local_40,local_48);
      if ((cVar2 != '\0') && (local_38 <= local_30)) {
        dVar3 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                                  (*(longlong **)(param_1 + 0xee0));
        FUN_010e81e0(uVar1,0,local_30 + dVar3);
      }
    }
    FUN_015126e0(param_1);
  }
  FUN_010faf40(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

