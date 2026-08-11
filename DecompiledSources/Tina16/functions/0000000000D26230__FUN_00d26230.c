/* Ghidra address: 00d26230 */
/* Ghidra symbol: FUN_00d26230 */


void FUN_00d26230(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int local_res18 [4];
  undefined1 auStack_58 [40];
  
  local_res18[0] = param_3;
  FUN_00d21150(param_1,local_res18);
  lVar4 = param_1[0xd];
  FUN_00409a70(param_2,lVar4,(longlong)local_res18[0]);
  FUN_00409a70(param_2,lVar4 + 0x3c,(longlong)local_res18[0]);
  FUN_00d26200(auStack_58,0xb0b,lVar4 + 0xc,0xb);
  FUN_00d26200(auStack_58,0xb1b1,lVar4 + 0x48,0xb);
  uVar1 = *(uint *)(lVar4 + 0x3c);
  uVar2 = *(uint *)(lVar4 + 0x40);
  uVar3 = *(uint *)(lVar4 + 0x44);
  uVar5 = FUN_00cd7330(uVar1 ^ uVar1 >> 0x10 ^ uVar2 << 0x10 ^ uVar2 >> 0x10 ^ uVar3 << 0x10 ^
                       uVar2 >> 0x18 ^ uVar3 << 8 ^ uVar3 >> 8 ^ uVar1 << 0x18 ^ uVar3 >> 0x10 ^
                       uVar1 << 0x10 ^ uVar3 >> 0x18 ^ uVar1 << 8);
  *(undefined4 *)(lVar4 + 0x44) = uVar5;
  uVar5 = FUN_00cd7330(uVar2 ^ uVar2 >> 0x10 ^ uVar3 << 0x10 ^ uVar3 >> 0x10 ^ uVar1 << 0x10 ^
                       uVar3 >> 0x18 ^ uVar1 << 8 ^ uVar1 >> 8 ^ uVar2 << 0x18 ^ uVar1 >> 0x10 ^
                       uVar2 << 0x10 ^ uVar1 >> 0x18 ^ uVar2 << 8);
  *(undefined4 *)(lVar4 + 0x40) = uVar5;
  uVar5 = FUN_00cd7330(uVar3 ^ uVar3 >> 0x10 ^ uVar1 << 0x10 ^ uVar1 >> 0x10 ^ uVar2 << 0x10 ^
                       uVar1 >> 0x18 ^ uVar2 << 8 ^ uVar2 >> 8 ^ uVar3 << 0x18 ^ uVar2 >> 0x10 ^
                       uVar3 << 0x10 ^ uVar2 >> 0x18 ^ uVar3 << 8);
  *(undefined4 *)(lVar4 + 0x3c) = uVar5;
  (**(code **)(*param_1 + 0x40))(param_1,param_4);
  return;
}

