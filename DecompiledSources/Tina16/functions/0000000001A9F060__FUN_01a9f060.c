/* Ghidra address: 01a9f060 */
/* Ghidra symbol: FUN_01a9f060 */


longlong *
FUN_01a9f060(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,int param_5
            ,undefined8 param_6,char param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar4 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  plVar5 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  uVar6 = FUN_007d5080(&PTR_FUN_006441f8,1,0);
  FUN_004b9ec0(plVar5);
  (**(code **)(*plVar5 + 8))(plVar5,param_5);
  FUN_004b89e0(plVar5,param_6,(longlong)param_5);
  FUN_004b6dc0(plVar5,0);
  (**(code **)(*plVar4 + 0xc0))(plVar4,plVar5);
  iVar1 = FUN_00c3c500(param_1,param_2,param_3,param_4);
  FUN_007d6450(uVar6);
  iVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
  FUN_007d55b0(uVar6,(longlong)iVar2 / (longlong)iVar1 & 0xffffffff);
  uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
  FUN_007d5610(uVar6,uVar3);
  FUN_007d5ad0(uVar6,plVar4,0x1fffffff);
  plVar7 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060bbf0(plVar7,6);
  FUN_007d5cb0(uVar6,(longlong)param_7,plVar7);
  (**(code **)(*plVar7 + 0x80))(plVar7,1);
  plVar8 = (longlong *)FUN_00609e10(plVar4);
  uVar3 = (**(code **)(*plVar8 + 0x30))(plVar8,0,0);
  FUN_0060be30(plVar7,uVar3);
  FUN_00410f20(plVar4);
  FUN_00410f20(plVar5);
  FUN_00410f20(uVar6);
  return plVar7;
}

