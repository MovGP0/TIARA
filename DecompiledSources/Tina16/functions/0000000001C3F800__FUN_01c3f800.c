/* Ghidra address: 01c3f800 */
/* Ghidra symbol: FUN_01c3f800 */


void FUN_01c3f800(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int hSrc;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  HDC hdcDest;
  HDC hdcSrc;
  undefined8 local_res10 [3];
  undefined1 local_48 [28];
  BLENDFUNCTION local_2c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0064cb30(*(undefined8 *)(param_1 + 0x7f8),0);
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x7f8),0);
  uVar1 = FUN_0064d0b0(param_1);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x7f8),uVar1);
  uVar1 = FUN_0064d120(param_1);
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x7f8),uVar1);
  plVar6 = (longlong *)FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x818) + 0x318));
  uVar1 = FUN_0064d0b0(param_1);
  (**(code **)(*plVar6 + 0x88))(plVar6,uVar1);
  plVar6 = (longlong *)FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x818) + 0x318));
  uVar1 = FUN_0064d120(param_1);
  (**(code **)(*plVar6 + 0x70))(plVar6,uVar1);
  uVar7 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x818) + 0x318));
  lVar8 = FUN_00609e10(uVar7);
  FUN_005fdab0(*(undefined8 *)(lVar8 + 0x80),0);
  uVar7 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x818) + 0x318));
  lVar8 = FUN_00609e10(uVar7);
  FUN_005fdcb0(*(undefined8 *)(lVar8 + 0x80),0);
  uVar7 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x818) + 0x318));
  plVar6 = (longlong *)FUN_00609e10(uVar7);
  uVar1 = FUN_0064d0b0(param_1);
  uVar2 = FUN_0064d120(param_1);
  FUN_00498350(local_48,0,0,uVar1,uVar2);
  (**(code **)(*plVar6 + 0xa8))(plVar6,local_48);
  local_2c.BlendOp = '\0';
  local_2c.BlendFlags = '\0';
  local_2c.SourceConstantAlpha = 'd';
  local_2c.AlphaFormat = '\0';
  uVar7 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x818) + 0x318));
  FUN_0060bbf0(uVar7);
  uVar7 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x818) + 0x318));
  uVar7 = FUN_00609e10(uVar7);
  hdcDest = (HDC)FUN_005ffa40(uVar7);
  iVar3 = FUN_0064d0b0(param_1);
  iVar4 = FUN_0064d120(param_1);
  uVar7 = FUN_007ffbe0(param_1);
  hdcSrc = (HDC)FUN_005ffa40(uVar7);
  iVar5 = FUN_0064d0b0(param_1);
  hSrc = FUN_0064d120(param_1);
  AlphaBlend(hdcDest,0,0,iVar3,iVar4,hdcSrc,0,0,iVar5,hSrc,local_2c);
  FUN_006e6920(*(undefined8 *)(param_1 + 0x808),0);
  iVar3 = FUN_0064d120(param_1);
  iVar4 = FUN_0064d0b0(param_1);
  iVar5 = FUN_0064d120(param_1);
  FUN_00498350(local_48,0x14,
               (longlong)(iVar3 - *(int *)(*(longlong *)(param_1 + 0x808) + 0x9c)) / 2 & 0xffffffff,
               iVar4 + -0x14,(iVar5 + *(int *)(*(longlong *)(param_1 + 0x808) + 0x9c)) / 2);
  FUN_0064d040(*(undefined8 *)(param_1 + 0x808),local_48);
  FUN_0064cb30(*(undefined8 *)(param_1 + 0x800),
               *(undefined4 *)(*(longlong *)(param_1 + 0x808) + 0x90));
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x800),
               *(undefined4 *)(*(longlong *)(param_1 + 0x808) + 0x98));
  FUN_0064cb90(*(longlong *)(param_1 + 0x800),
               (*(int *)(*(longlong *)(param_1 + 0x808) + 0x94) -
               *(int *)(*(longlong *)(param_1 + 0x800) + 0x9c)) + -10);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x800),local_res10[0]);
  iVar3 = FUN_0064d0b0(param_1);
  FUN_0064cb30(*(undefined8 *)(param_1 + 0x810),
               (longlong)(iVar3 - *(int *)(*(longlong *)(param_1 + 0x810) + 0x98)) / 2 & 0xffffffff)
  ;
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x810),
               *(int *)(*(longlong *)(param_1 + 0x808) + 0x94) +
               *(int *)(*(longlong *)(param_1 + 0x808) + 0x9c) + 10);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x810),param_4);
  FUN_006e6860(*(undefined8 *)(param_1 + 0x808),param_3);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),1);
  FUN_00414480(local_res10);
  return;
}

