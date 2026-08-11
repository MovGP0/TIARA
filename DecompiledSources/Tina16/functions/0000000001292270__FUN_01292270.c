/* Ghidra address: 01292270 */
/* Ghidra symbol: FUN_01292270 */


void FUN_01292270(longlong *param_1,longlong *param_2)

{
  short sVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  short *psVar7;
  longlong lVar8;
  longlong *local_res8 [4];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_50,L"position");
  FUN_00416ba0(&local_48,local_50,&DAT_012926cc);
  uVar3 = FUN_012421e0(&local_48);
  uVar4 = FUN_012421e0(&local_48);
  (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_38,&PTR_DAT_012926dc);
  (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_40,L"groupid");
  (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_58,L"image/shape");
  FUN_0041b890(&local_30,local_58,&DAT_01292724);
  if (local_30 != 0) {
    lVar5 = FUN_017b8a10(0,&PTR_FUN_017b8668,0);
    *(undefined4 *)(lVar5 + 0xc) = uVar3;
    *(undefined4 *)(lVar5 + 0x10) = uVar4;
    if (local_38 != 0) {
      FUN_017b9a50(lVar5,local_38);
    }
    if (local_40 != 0) {
      FUN_017b9ad0(lVar5,local_40);
    }
    uVar6 = FUN_0124dcc0(local_30);
    FUN_004ae7e0(*(undefined8 *)(lVar5 + 0x40),uVar6);
    psVar7 = (short *)FUN_004aeac0(*(undefined8 *)(lVar5 + 0x40),0);
    sVar1 = *psVar7;
    *(short *)(lVar5 + 0x38) = sVar1;
    if (sVar1 == 0x65) {
      lVar8 = FUN_004aeac0(*(undefined8 *)(lVar5 + 0x40),0);
      (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_60,L"startarrow");
      uVar2 = FUN_0043fc50(local_60,0);
      *(undefined1 *)(lVar8 + 0x1a) = uVar2;
      (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_68,L"endarrow");
      uVar2 = FUN_0043fc50(local_68,0);
      *(undefined1 *)(lVar8 + 0x21) = uVar2;
      (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_70,L"color");
      uVar3 = FUN_0043fc50(local_70,0xfffffffe);
      *(undefined4 *)(lVar8 + 0x1d) = uVar3;
      *(undefined4 *)(lVar8 + 0x24) = uVar3;
    }
    if (*(short *)(lVar5 + 0x38) == 0x69) {
      lVar8 = FUN_004aeac0(*(undefined8 *)(lVar5 + 0x40),0);
      (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_78,L"startarrow");
      uVar2 = FUN_0043fc50(local_78,0);
      *(undefined1 *)(lVar8 + 0x19) = uVar2;
      (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_80,L"endarrow");
      uVar2 = FUN_0043fc50(local_80,0);
      *(undefined1 *)(lVar8 + 0x20) = uVar2;
      (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_88,L"color");
      uVar3 = FUN_0043fc50(local_88,0xfffffffe);
      *(undefined4 *)(lVar8 + 0x1c) = uVar3;
      *(undefined4 *)(lVar8 + 0x23) = uVar3;
      (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_90,L"style");
      uVar2 = FUN_0043fc50(local_90,0);
      *(undefined1 *)(lVar8 + 0xc) = uVar2;
    }
    (**(code **)(*param_2 + 0x20))(param_2,lVar5);
  }
  FUN_00414560(&local_90,7);
  FUN_0041b800(&local_58);
  FUN_00414560(&local_50,4);
  FUN_0041b800(&local_30);
  FUN_0041b800(local_res8);
  return;
}

