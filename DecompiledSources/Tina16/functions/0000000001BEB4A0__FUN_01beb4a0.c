/* Ghidra address: 01beb4a0 */
/* Ghidra symbol: FUN_01beb4a0 */


void FUN_01beb4a0(longlong *param_1,undefined4 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  FUN_01bd3700(param_1,param_2,param_3,param_4,param_5);
  lVar2 = FUN_01beb450(param_1);
  cVar1 = *(char *)(lVar2 + 0x592);
  *(char *)(param_1 + 0x6d) = cVar1;
  if ((char)param_2 == '\0') {
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 600))(param_1,1);
      if ((DAT_02111468 != (longlong *)0x0) && ((longlong *)param_1[1] != DAT_02111468)) {
        (**(code **)(*DAT_02111468 + 0x408))(DAT_02111468);
      }
      uVar3 = FUN_01beb450(param_1);
      uVar3 = FUN_0065b870(uVar3);
      thunk_FUN_0413e052(uVar3,0xb403,0,param_1);
    }
  }
  else if (((char)param_2 == '\x01') &&
          (lVar2 = FUN_01beb450(param_1), *(char *)(lVar2 + 0x592) != '\0')) {
    plVar4 = (longlong *)FUN_01beb450(param_1);
    (**(code **)(*plVar4 + 0x408))(plVar4);
  }
  return;
}

