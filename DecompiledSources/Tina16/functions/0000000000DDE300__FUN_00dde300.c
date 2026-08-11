/* Ghidra address: 00dde300 */
/* Ghidra symbol: FUN_00dde300 */


void FUN_00dde300(longlong param_1,uint *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_10;
  
  local_10 = auStack_48;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    if ((0xbbff < *param_2) && (*param_2 < 0xc000)) {
      *param_2 = *param_2 - 0x9c00;
    }
    if ((*(uint *)(param_1 + 0x4f0) & 0x10000) == 0) {
      uVar2 = FUN_0065b870(param_1);
      local_28 = *(undefined8 *)(param_2 + 4);
      uVar2 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x460),uVar2,*param_2,
                                 *(undefined8 *)(param_2 + 2));
      *(undefined8 *)(param_2 + 6) = uVar2;
      return;
    }
  }
  FUN_00656f10(param_1,param_2);
  return;
}

