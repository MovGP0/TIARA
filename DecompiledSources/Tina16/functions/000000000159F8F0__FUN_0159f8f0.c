/* Ghidra address: 0159f8f0 */
/* Ghidra symbol: FUN_0159f8f0 */


undefined8 FUN_0159f8f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (*(longlong *)(param_2 + 0x28) == 0)) ||
     ((*(longlong *)(param_2 + 0x30) == 0 || (*(longlong *)(param_2 + 0x38) == 0)))) {
    uVar2 = 0xfffffffe;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x28);
    lVar3 = (**(code **)(param_2 + 0x30))(*(undefined8 *)(param_2 + 0x40),1,0x1be0);
    if (lVar3 == 0) {
      uVar2 = 0xfffffffc;
    }
    else {
      local_18 = 0;
      if ((*(longlong *)(lVar1 + 0x38) != 0) &&
         (local_18 = (**(code **)(param_2 + 0x30))
                               (*(undefined8 *)(param_2 + 0x40),
                                1 << ((byte)*(undefined4 *)(lVar1 + 0x28) & 0x1f),1), local_18 == 0)
         ) {
        (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x40),lVar3);
        return 0xfffffffc;
      }
      FUN_01596930(param_1,param_2,0x54);
      FUN_01596930(lVar3,lVar1,0x1be0);
      if ((lVar1 + 0x544U <= *(ulonglong *)(lVar1 + 0x54)) &&
         (*(ulonglong *)(lVar1 + 0x54) <= lVar1 + 0x1bd0U)) {
        *(longlong *)(lVar3 + 0x54) =
             lVar3 + 0x544 + (*(longlong *)(lVar1 + 0x54) - (lVar1 + 0x544) >> 2) * 4;
        *(longlong *)(lVar3 + 0x5c) =
             lVar3 + 0x544 + (*(longlong *)(lVar1 + 0x5c) - (lVar1 + 0x544) >> 2) * 4;
      }
      *(longlong *)(lVar3 + 0x7c) =
           lVar3 + 0x544 + (*(longlong *)(lVar1 + 0x7c) - (lVar1 + 0x544) >> 2) * 4;
      if (local_18 != 0) {
        FUN_01596930(local_18,*(undefined8 *)(lVar1 + 0x38),
                     1 << ((byte)*(undefined4 *)(lVar1 + 0x28) & 0x1f));
      }
      *(longlong *)(lVar3 + 0x38) = local_18;
      *(longlong *)(param_1 + 0x28) = lVar3;
      uVar2 = 0;
    }
  }
  return uVar2;
}

