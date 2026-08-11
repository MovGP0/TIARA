/* Ghidra address: 0170a000 */
/* Ghidra symbol: FUN_0170a000 */


longlong FUN_0170a000(longlong param_1,char param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_01709fc0(local_res8 + 8);
  FUN_01709fc0(local_res8 + 0x10);
  FUN_01709fc0(local_res8 + 0x18);
  FUN_01709fc0(local_res8 + 0x20);
  FUN_01709fc0(local_res8 + 0x28);
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar3;
  FUN_004b67b0(uVar3,1);
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar3;
  FUN_004b67b0(uVar3,1);
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar3;
  FUN_004b67b0(uVar3,1);
  FUN_00441640(&local_38,local_res18);
  FUN_00414ad0(local_res8 + 0x458,local_38);
  FUN_00416ba0(local_20,*(undefined8 *)(local_res8 + 0x458),L"SPMACROS.IND");
  FUN_004412f0(local_20[0]);
  FUN_01709830(*(undefined8 *)(local_res8 + 0x458),L"*.IND",*(undefined8 *)(local_res8 + 0x30));
  FUN_01709830(*(undefined8 *)(local_res8 + 0x458),L"*.LIB",*(undefined8 *)(local_res8 + 0x38));
  FUN_01709830(*(undefined8 *)(local_res8 + 0x458),L"*.TLD",*(undefined8 *)(local_res8 + 0x40));
  iVar1 = (**(code **)(**(longlong **)(local_res8 + 0x38) + 0x28))
                    (*(longlong **)(local_res8 + 0x38));
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(longlong **)(local_res8 + 0x38) + 0x28))
                      (*(longlong **)(local_res8 + 0x38));
    iVar2 = (**(code **)(**(longlong **)(local_res8 + 0x40) + 0x28))
                      (*(longlong **)(local_res8 + 0x40));
    if (iVar1 != iVar2) {
      FUN_01709980(&local_28,*(undefined8 *)(local_res8 + 0x38),*(undefined8 *)(local_res8 + 0x40),
                   *(undefined8 *)(local_res8 + 0x458));
      FUN_00416ba0(&local_40,
                   L"Warning: Missing library source file(s) - \r\nThe number of LIB and TLD files should be the same."
                   ,local_28);
      FUN_01709f60(local_res8,local_40);
    }
    uVar3 = FUN_004b9860(&PTR_FUN_0047c498,1,local_20[0],0xff01);
    *(undefined8 *)(local_res8 + 0x48) = uVar3;
    FUN_0170b700(local_res8,local_res20);
    FUN_0170b860(local_res8);
  }
  FUN_00414560(&local_40,2);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

