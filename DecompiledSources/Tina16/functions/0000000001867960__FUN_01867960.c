/* Ghidra address: 01867960 */
/* Ghidra symbol: FUN_01867960 */


longlong * FUN_01867960(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong *local_30;
  
  local_30 = (longlong *)0x0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f92e8);
  if (cVar1 != '\0') {
    local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    FUN_0060bbf0(local_30,3);
    uVar2 = (**(code **)(*param_2 + 0x60))(param_2);
    (**(code **)(*local_30 + 0x88))(local_30,uVar2);
    uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
    (**(code **)(*local_30 + 0x70))(local_30,uVar2);
    cVar1 = FUN_00609f90(param_2);
    if (cVar1 == '\a') {
      iVar3 = (**(code **)(*local_30 + 0x48))();
      iVar7 = 0;
      if (-1 < iVar3 + -1) {
        do {
          puVar5 = (undefined1 *)FUN_0060a050(local_30,iVar7);
          puVar6 = (undefined4 *)FUN_0060a050(param_2,iVar7);
          iVar4 = (**(code **)(*local_30 + 0x60))();
          if (-1 < iVar4 + -1) {
            do {
              *puVar5 = (char)((uint)*puVar6 >> 0x18);
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return local_30;
}

