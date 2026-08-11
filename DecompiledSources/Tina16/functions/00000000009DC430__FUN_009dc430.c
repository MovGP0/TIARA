/* Ghidra address: 009dc430 */
/* Ghidra symbol: FUN_009dc430 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_009dc430(undefined8 param_1,undefined8 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  undefined2 local_88 [4];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined4 local_50;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_58 = auStack_a8;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  uStack_28 = param_2[2];
  FUN_0046bd60(&local_38);
  local_40 = &local_38;
  if ((short)local_38 == 8) {
    local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_00467e90(&local_70,&local_38);
    FUN_00416dc0(&local_68,local_70,1,7);
    FUN_0043e1a0(&local_60,local_68);
    iVar1 = FUN_00416db0(local_60,L"http://");
    if (iVar1 == 0) {
      FUN_00467e90(&local_78,&local_38);
      FUN_009dc320(local_78,local_20);
    }
    else {
      FUN_00467e90(&local_80,&local_38);
      FUN_004b9f40(local_20,local_80);
    }
    uVar2 = FUN_009dc720(param_1,local_20,local_88);
    FUN_0041d630(uVar2);
    *param_3 = local_88[0];
    FUN_00410f20(local_20);
  }
  else {
    FUN_0086ccd0(L"load(object)",L"ADOM XML v4");
  }
  local_50 = 0;
  FUN_00414560(&local_80,5);
  FUN_00460ba0(&local_38);
  return local_50;
}

