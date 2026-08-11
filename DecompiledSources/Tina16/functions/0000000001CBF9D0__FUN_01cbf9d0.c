/* Ghidra address: 01cbf9d0 */
/* Ghidra symbol: FUN_01cbf9d0 */


void FUN_01cbf9d0(longlong param_1,undefined8 param_2,ushort param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0;
  iVar3 = FUN_01d31a40(param_2);
  if (iVar3 == 0) {
    if (param_3 < 0x12) {
      FUN_01d312f0(param_2,&local_20);
    }
    else {
      FUN_01d316c0(param_2,&local_20);
    }
    FUN_01cbfc40(param_1,local_20);
    FUN_01d30f00(param_2,param_1 + 0x10,2);
    FUN_01d30f00(param_2,param_1 + 0x12,2);
    FUN_01d30f00(param_2,param_1 + 0x14,1);
    FUN_01cbfcb0(param_1,*(undefined1 *)(param_1 + 0x14));
    bVar2 = *(byte *)(param_1 + 0x14);
    if (bVar2 != 0) {
      if (param_3 == 0x10) {
        iVar3 = 0;
        iVar4 = bVar2 + 1;
        do {
          FUN_01d30f00(param_2,&local_23,3);
          puVar1 = (undefined1 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 4);
          *puVar1 = local_23;
          puVar1[2] = local_22;
          puVar1[3] = local_21;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      else {
        FUN_01d30f00(param_2,*(undefined8 *)(param_1 + 0x18),(uint)bVar2 * 4);
      }
    }
  }
  FUN_00414480(&local_20);
  return;
}

