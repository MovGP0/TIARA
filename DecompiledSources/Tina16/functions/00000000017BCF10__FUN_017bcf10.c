/* Ghidra address: 017bcf10 */
/* Ghidra symbol: FUN_017bcf10 */


longlong *
FUN_017bcf10(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
            ushort param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  plVar3 = (longlong *)FUN_00410920(param_1,local_res10);
  if (plVar3 != (longlong *)0xffffffffffffffff) {
    FUN_017bdbf0(plVar3,0);
    if ((short)param_4 == 0x101) {
      if (param_5 < 0x11) {
        *(undefined2 *)(plVar3 + 0x5b) = 0xfffe;
      }
      else {
        *(undefined2 *)(plVar3 + 0x5b) = 0xffff;
      }
    }
    else {
      *(undefined2 *)(plVar3 + 0x5b) = 0;
    }
    cVar1 = '\0';
    iVar2 = FUN_01d31a40(*param_3);
    if (iVar2 == 0) {
      cVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,param_3,param_4,param_5,param_6);
    }
    if ((cVar1 == '\0') && (iVar2 = FUN_01d31a40(*param_3), iVar2 == 0)) {
      return plVar3;
    }
    param_1 = (longlong *)FUN_004109a0(plVar3,local_res10[0]);
  }
  return param_1;
}

