/* Ghidra address: 01613e30 */
/* Ghidra symbol: FUN_01613e30 */


void FUN_01613e30(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined *puVar2;
  short sVar3;
  undefined *unaff_RDI;
  longlong local_30;
  
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  puVar2 = PTR_DAT_02001fe0;
  if (sVar3 == 0x17) {
    (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
    FUN_00409a70(puVar2,*(undefined8 *)(*(longlong *)(local_30 + 0x26) + 9),
                 *(undefined2 *)(*(longlong *)(local_30 + 0x26) + 0x23));
    lVar1 = *(longlong *)(local_30 + 0x26);
    sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar3 == 0x17) {
      unaff_RDI = PTR_PTR_02005308;
    }
    FUN_01613b60(param_1,*(undefined2 *)(lVar1 + 0x21),*(undefined8 *)(lVar1 + 9),
                 *(undefined8 *)(lVar1 + 1),param_2,unaff_RDI);
  }
  return;
}

