/* Ghidra address: 00978710 */
/* Ghidra symbol: FUN_00978710 */


void FUN_00978710(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  *param_4 = 0;
  local_28 = *(longlong **)(param_1 + 0xa8);
  if (local_28 != (longlong *)0x0) {
    lVar1 = local_28[6];
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_008d3958);
    if (cVar2 == '\0') {
      cVar2 = FUN_004113d0(lVar1,&PTR_FUN_008d3d18);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(lVar1,&PTR_FUN_008d4fe8);
        if (cVar2 == '\0') {
          cVar2 = FUN_004113d0(lVar1,&PTR_FUN_008d5358);
          if (cVar2 == '\0') {
            cVar2 = FUN_004113d0(lVar1,&PTR_FUN_008d3548);
            if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0xa4) & 1) != 0)) {
              uVar3 = (**(code **)(*local_28 + 0x28))(local_28);
              *param_4 = uVar3;
            }
          }
          else if ((*(byte *)(param_1 + 0xa4) & 4) != 0) {
            uVar3 = (**(code **)(*local_28 + 0x28))(local_28);
            *param_4 = uVar3;
          }
        }
        else if ((*(byte *)(param_1 + 0xa4) & 4) != 0) {
          uVar3 = (**(code **)(*local_28 + 0x28))(local_28);
          *param_4 = uVar3;
        }
      }
      else if ((*(byte *)(param_1 + 0xa4) & 2) != 0) {
        uVar3 = (**(code **)(*local_28 + 0x28))(local_28);
        *param_4 = uVar3;
      }
    }
    else if ((*(byte *)(param_1 + 0xa4) & 2) != 0) {
      uVar3 = (**(code **)(*local_28 + 0x28))(local_28);
      *param_4 = uVar3;
    }
  }
  return;
}

