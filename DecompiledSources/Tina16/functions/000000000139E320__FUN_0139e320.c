/* Ghidra address: 0139e320 */
/* Ghidra symbol: FUN_0139e320 */


void FUN_0139e320(undefined8 param_1,int param_2,char param_3,char param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 *local_40;
  undefined2 local_32;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_78;
  local_30 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,param_1,0x20);
  (**(code **)(*local_30 + 0x48))(local_30,param_2,0);
  local_28 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  lVar4 = (**(code **)*local_30)(local_30);
  (**(code **)(*local_28 + 0x10))(local_28,lVar4 - param_2);
  iVar2 = (**(code **)*local_30)(local_30);
  (**(code **)(*local_30 + 0x18))(local_30,local_28[1],iVar2 - param_2);
  local_58 = 0;
  local_20[0] = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,0);
  *(undefined8 *)PTR_DAT_02003a18 = 0;
  FUN_01d32e90(*(undefined8 *)PTR_DAT_02003458,local_20);
  iVar2 = FUN_01d31a40(local_20[0]);
  if ((iVar2 == 0) && (*(longlong *)PTR_DAT_02003a18 != 0)) {
    local_32 = 0xc01;
    if (param_3 != '\0') {
      local_32 = 0xd01;
    }
    FUN_0198cd90(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),
                 *(undefined8 *)PTR_DAT_02003a18,local_32,1);
    FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0,0,1);
    uVar1 = FUN_014a7030(param_1,*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x218) = uVar1;
  }
  iVar2 = FUN_01d31a40(local_20[0]);
  if (iVar2 != 0) {
    uVar3 = FUN_01d31a40(local_20[0]);
    FUN_00b047e0(uVar3);
  }
  if (*(longlong *)PTR_DAT_02003a18 != 0) {
    uVar5 = (**(code **)**(undefined8 **)PTR_DAT_02003a18)(*(undefined8 **)PTR_DAT_02003a18);
    FUN_00418590(uVar5,&DAT_01984da0);
  }
  *(undefined8 *)PTR_DAT_02003a18 = 0;
  FUN_00410f20(local_20[0]);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  if (param_4 != '\0') {
    FUN_004412f0(param_1);
  }
  return;
}

