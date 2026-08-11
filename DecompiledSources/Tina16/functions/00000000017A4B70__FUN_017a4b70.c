/* Ghidra address: 017a4b70 */
/* Ghidra symbol: FUN_017a4b70 */


void FUN_017a4b70(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  
  local_60 = auStack_a8;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = *(longlong *)(param_1 + 8);
  FUN_00724420(*(undefined8 *)(local_58 + 0xc40),*(undefined8 *)(local_58 + 0xd38));
  cVar1 = (**(code **)(**(longlong **)(local_58 + 0xc40) + 0xa8))(*(longlong **)(local_58 + 0xc40));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(local_58 + 0xc40),&local_70);
    FUN_00441640(&local_68,local_70);
    FUN_00414ad0(local_58 + 0xd38,local_68);
    local_40 = *(longlong *)(param_1 + 0x6f0);
    local_50 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    local_30 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    FUN_0060bbf0(local_30,6);
    uVar2 = FUN_006e2530(local_40);
    local_48 = FUN_006dd390(uVar2);
    lVar3 = FUN_006e2530(local_40);
    local_24 = *(undefined4 *)(lVar3 + 0x28);
    FUN_007d5cb0(*(undefined8 *)(param_1 + 0x780),local_24,local_30);
    uVar2 = FUN_006e2530(local_40);
    FUN_006de140(uVar2);
    FUN_00724270(*(undefined8 *)(local_58 + 0xc40),&local_78);
    (**(code **)(*local_50 + 0xa8))(local_50,local_78);
    cVar1 = FUN_00609f90(local_50);
    if (cVar1 != '\x06') {
      uVar2 = FUN_0044d710(&PTR_FUN_005f2298,1,PTR_PTR_02002740);
      FUN_004134c0(uVar2);
    }
    FUN_007d5fa0(*(undefined8 *)(param_1 + 0x780),local_24,local_50,*(undefined4 *)(param_1 + 0x7b4)
                );
    FUN_0043f750(&local_88,local_24);
    FUN_00416ba0(&local_80,L"Picture #",local_88);
    local_38 = FUN_006dee40(*(undefined8 *)(local_40 + 0x550),local_48,local_80);
    FUN_006dcbd0(local_38,local_24);
    FUN_006dc990(local_38,0x66);
    FUN_00410f20(local_50);
    FUN_00410f20(local_30);
  }
  FUN_00414560(&local_88,2);
  FUN_00414560(&local_78,2);
  FUN_00414480(&local_68);
  return;
}

