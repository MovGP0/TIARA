/* Ghidra address: 01aeced0 */
/* Ghidra symbol: FUN_01aeced0 */


undefined1
FUN_01aeced0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 local_res18 [2];
  undefined1 local_29;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_29 = 0;
  iVar2 = FUN_004d3e30(param_2);
  iVar6 = 1;
  if (0 < iVar2) {
    do {
      iVar7 = iVar6 + -1;
      uVar4 = FUN_004d3de0(param_2,iVar7);
      cVar1 = FUN_004113d0(uVar4,&PTR_FUN_007d94d0);
      if (cVar1 != '\0') {
        lVar5 = FUN_004d3de0(param_2,iVar7);
        iVar3 = FUN_00416db0(*(undefined8 *)(lVar5 + 0x10),local_res18[0]);
        if (iVar3 == 0) {
          local_29 = 1;
          uVar4 = FUN_004d3de0(param_2,iVar7);
          *param_4 = uVar4;
          break;
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_res18);
  return local_29;
}

