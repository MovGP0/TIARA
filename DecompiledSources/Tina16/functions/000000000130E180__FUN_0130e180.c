/* Ghidra address: 0130e180 */
/* Ghidra symbol: FUN_0130e180 */


void FUN_0130e180(undefined8 param_1,undefined8 param_2,char param_3,undefined8 *param_4,
                 undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_res10 [3];
  undefined8 local_970 [2];
  undefined8 local_960 [296];
  
  local_970[0] = 0;
  puVar4 = local_960;
  for (lVar3 = 0x127; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_004179d0(local_960,&DAT_01d0d0b8);
  FUN_01cc6020(param_1);
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  if (param_3 == '\x06') {
    FUN_01158fe0(0,param_1,uVar2,plVar1,0,0,*(undefined8 *)PTR_DAT_02001f18,local_960,param_6,2,1,0)
    ;
  }
  else if (param_3 == '\b') {
    FUN_011598d0(0,param_1,uVar2,plVar1,0,*(undefined8 *)PTR_DAT_02001f18,local_960,2,0,0,0,0x1f,0);
  }
  else {
    FUN_0115c8a0(0,param_1,uVar2,plVar1,0,*(undefined8 *)PTR_DAT_02001f18,local_960,param_5,2,0,0);
  }
  FUN_00416ba0(local_970,local_res10[0],L".txt");
  (**(code **)(*plVar1 + 0x100))(plVar1,local_970[0]);
  FUN_00410f20(plVar1);
  FUN_00410f20(uVar2);
  FUN_01cc6080(param_1,1,0);
  FUN_00414480(local_970);
  FUN_00417740(local_960,&DAT_01d0d0b8);
  FUN_00414480(local_res10);
  return;
}

