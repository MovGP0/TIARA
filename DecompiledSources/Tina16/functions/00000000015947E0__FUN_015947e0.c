/* Ghidra address: 015947e0 */
/* Ghidra symbol: FUN_015947e0 */


void FUN_015947e0(longlong param_1,longlong param_2,undefined8 param_3,ushort param_4)

{
  ushort uVar1;
  byte *pbVar2;
  ushort uVar3;
  undefined1 local_68 [64];
  
  FUN_0040d200(param_1,0x160,0);
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x158) = param_2;
    uVar1 = *(ushort *)(param_2 + 8);
    if (uVar1 < param_4) {
      FUN_015946c0(param_2,local_68,param_3,param_4);
      FUN_00409a70(local_68,param_1 + 0xd4,*(undefined2 *)(param_2 + 10));
    }
    else {
      FUN_00409a70(param_3,param_1 + 0xd4,param_4);
    }
    pbVar2 = (byte *)(param_1 + 0xd4);
    uVar3 = uVar1;
    do {
      *pbVar2 = *pbVar2 ^ 0x36;
      pbVar2 = pbVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    (**(code **)(param_2 + 0xc))(param_1);
    (**(code **)(param_2 + 0x1c))(param_1,param_1 + 0xd4,uVar1);
  }
  return;
}

