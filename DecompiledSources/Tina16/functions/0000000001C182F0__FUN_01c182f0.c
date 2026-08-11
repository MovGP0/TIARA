/* Ghidra address: 01c182f0 */
/* Ghidra symbol: FUN_01c182f0 */


void FUN_01c182f0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  (**(code **)(*(longlong *)param_1[0x17] + 0x10))
            ((longlong *)param_1[0x17],*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
  lVar1 = param_1[0x17];
  uVar2 = (**(code **)(*param_1 + 0x418))(param_1);
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x28),uVar2,
                             *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
  FUN_005fcc80(lVar1,uVar2);
  return;
}

