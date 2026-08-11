/* Ghidra address: 015948e0 */
/* Ghidra symbol: FUN_015948e0 */


void FUN_015948e0(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x158);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 8);
    (**(code **)(lVar2 + 0x14))(param_1,param_2);
    uVar4 = (uint)uVar1;
    if (-1 < (int)(uVar4 - 1)) {
      pbVar3 = (byte *)(param_1 + 0xd4);
      do {
        *pbVar3 = *pbVar3 ^ 0x6a;
        pbVar3 = pbVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    (**(code **)(*(longlong *)(param_1 + 0x158) + 0xc))(param_1);
    (**(code **)(*(longlong *)(param_1 + 0x158) + 0x1c))(param_1,param_1 + 0xd4,uVar1);
    (**(code **)(*(longlong *)(param_1 + 0x158) + 0x1c))
              (param_1,param_2,*(undefined2 *)(*(longlong *)(param_1 + 0x158) + 10));
    (**(code **)(*(longlong *)(param_1 + 0x158) + 0x14))(param_1,param_2);
  }
  return;
}

