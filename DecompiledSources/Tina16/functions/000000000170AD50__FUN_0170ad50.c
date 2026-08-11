/* Ghidra address: 0170ad50 */
/* Ghidra symbol: FUN_0170ad50 */


char FUN_0170ad50(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  undefined8 local_res10 [3];
  char local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [3];
  
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_59 = '\x01';
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))(*(longlong **)(param_1 + 0x38));
  if (iVar2 != 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))(*(longlong **)(param_1 + 0x38));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))(*(longlong **)(param_1 + 0x40));
    if (iVar2 != iVar3) {
      FUN_01709980(&local_38,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                   *(undefined8 *)(param_1 + 0x458));
      FUN_00416ba0(&local_40,
                   L"Warning: Missing library source file(s) - \r\nThe number of LIB and TLD files in the SPICELIB folder should be the same."
                   ,local_38);
      FUN_0072d440(local_40,0,4,0);
    }
    FUN_00416ba0(local_30,local_res10[0],L"\\SPMACROS.IND");
    local_59 = FUN_00440a20(local_30[0],1);
    if (local_59 != '\0') {
      uVar4 = FUN_00440970(local_30[0]);
      dVar5 = (double)FUN_00442290(uVar4);
      iVar2 = 0;
      while (local_59 != '\0') {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
                          (*(longlong **)(param_1 + 0x38));
        if (iVar3 <= iVar2) break;
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                  (*(longlong **)(param_1 + 0x38),&local_50,iVar2);
        FUN_004414c0(&local_48,local_50,L".TLD");
        cVar1 = FUN_00440a20(local_48,1);
        if (cVar1 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                    (*(longlong **)(param_1 + 0x38),&local_58,iVar2);
          uVar4 = FUN_00440970(local_58);
          dVar6 = (double)FUN_00442290(uVar4);
          local_59 = dVar6 <= dVar5;
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  FUN_00414560(&local_58,6);
  FUN_00414480(local_res10);
  return local_59;
}

