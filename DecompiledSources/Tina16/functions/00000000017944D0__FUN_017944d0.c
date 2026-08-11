/* Ghidra address: 017944d0 */
/* Ghidra symbol: FUN_017944d0 */


void FUN_017944d0(longlong param_1)

{
  undefined8 uVar1;
  char cStack0000000000000028;
  char cStack0000000000000030;
  ushort uVar2;
  undefined8 local_20;
  
  FUN_017956f0(param_1,(longlong)_cStack0000000000000030 % 0x19 & 0xffffffff);
  (**(code **)(**(longlong **)(param_1 + 0xd28) + 0x10))(*(longlong **)(param_1 + 0xd28));
  local_20 = FUN_00498310(0,0);
  uVar2 = 0;
  cStack0000000000000030 = (char)(_cStack0000000000000030 / 0x19);
  cStack0000000000000028 = (char)(_cStack0000000000000028 / 0x19);
  uVar1 = FUN_017b02a0(&PTR_FUN_017a79c0,1,&LAB_01794614,1,0,4,
                       cStack0000000000000030 * '\x02' + cStack0000000000000028,0,0xffffff9c,
                       0xffffff9c,0,&local_20,0x4020000000000000,*(undefined4 *)(param_1 + 0xd40));
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd28),uVar1);
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd28),0);
  FUN_017afd00(uVar1,1);
  *(undefined4 *)(param_1 + 0xd30) = 0xffffffff;
  FUN_01795890(param_1,0xffffffff,0xffffffff,0,uVar2 & 0xff00,0);
  return;
}

