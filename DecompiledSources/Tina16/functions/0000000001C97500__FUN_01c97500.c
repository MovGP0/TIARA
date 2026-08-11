/* Ghidra address: 01c97500 */
/* Ghidra symbol: FUN_01c97500 */


void FUN_01c97500(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 unaff_RDI;
  
  cVar1 = FUN_01c8cee0(param_1);
  if ((cVar1 == '\0') && (*PTR_DAT_020052b8 == '\0')) {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_007d94d0);
    if (cVar1 != '\0') {
      if (param_2 == *(longlong *)(param_1 + 0x1070)) {
        uVar2 = FUN_0136dcb0(&PTR_FUN_01364168,1,param_1,0);
        FUN_01c6cee0(param_1,uVar2);
      }
      else if (param_2 == *(longlong *)(param_1 + 0x10e0)) {
        uVar2 = FUN_0136dcb0(&PTR_FUN_01364168,1,param_1,1);
        FUN_01c6cee0(param_1,uVar2);
      }
      else if (param_2 == *(longlong *)(param_1 + 0x10e8)) {
        uVar2 = FUN_0136d9f0(&PTR_FUN_01364710,1,param_1,0);
        FUN_01c6cee0(param_1,uVar2);
      }
      else if (param_2 == *(longlong *)(param_1 + 0x10f0)) {
        uVar2 = FUN_0136d9f0(&PTR_FUN_01364710,1,param_1,1);
        FUN_01c6cee0(param_1,uVar2);
      }
      else if (param_2 == *(longlong *)(param_1 + 0x1078)) {
        uVar2 = FUN_0136cf80(&PTR_FUN_013649e8,1,param_1);
        FUN_01c6cee0(param_1,uVar2);
      }
      else if (((param_2 == *(longlong *)(param_1 + 0x1080)) ||
               (param_2 == *(longlong *)(param_1 + 0x1088))) ||
              (param_2 == *(longlong *)(param_1 + 0x1090))) {
        if (param_2 == *(longlong *)(param_1 + 0x1080)) {
          unaff_RDI = 0;
        }
        if (param_2 == *(longlong *)(param_1 + 0x1088)) {
          unaff_RDI = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        }
        uVar3 = (undefined4)unaff_RDI;
        if (param_2 == *(longlong *)(param_1 + 0x1090)) {
          uVar3 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),2);
        }
        uVar2 = FUN_0136cce0(&PTR_FUN_01364440,1,param_1,uVar3);
        FUN_01c6cee0(param_1,uVar2);
      }
      FUN_01c6d670(param_1,*(undefined8 *)(param_1 + 0xbc0));
    }
  }
  return;
}

