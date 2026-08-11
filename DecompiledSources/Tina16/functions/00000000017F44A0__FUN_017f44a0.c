/* Ghidra address: 017f44a0 */
/* Ghidra symbol: FUN_017f44a0 */


ulonglong FUN_017f44a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  uVar3 = 0;
  uVar2 = FUN_0198a580(param_2);
  if ((byte)uVar2 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x1aU) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    local_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_40 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x80));
    (**(code **)(*param_2 + 0x68))(param_2,uVar2,local_38);
    FUN_00b95740(&local_48,local_38);
    cVar1 = FUN_00b958f0(&local_48);
    uVar3 = CONCAT71((int7)((ulonglong)(param_1 + 0x50) >> 8),cVar1 == '\0');
  }
  return uVar3 & 0xffffffff;
}

