/* Ghidra address: 0055c400 */
/* Ghidra symbol: FUN_0055c400 */


undefined8
FUN_0055c400(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar2 = (longlong *)FUN_0055c210(param_1);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)*param_1;
    (*(code *)plVar2[2])(param_1,local_20);
    uVar3 = FUN_0044d490(&PTR_FUN_004368f0,1,local_20[0]);
    FUN_004134c0(uVar3);
  }
  cVar1 = (**(code **)(*plVar2 + 0x60))(plVar2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2);
    if (cVar1 == '\0') {
      FUN_00557c30(plVar2,param_2,param_3,param_4,param_5);
      goto code_r0x0055c4b8;
    }
  }
  FUN_00557cd0(plVar2,param_2,param_3,param_4,param_5);
code_r0x0055c4b8:
  FUN_00414480(local_20);
  return param_2;
}

