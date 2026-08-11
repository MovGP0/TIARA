/* Ghidra address: 00f63da0 */
/* Ghidra symbol: FUN_00f63da0 */


longlong FUN_00f63da0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined8 in_RAX;
  undefined7 uVar2;
  longlong lVar1;
  char cVar3;
  
  cVar3 = (char)param_2;
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  if ((cVar3 == '\b') || (cVar3 == '\t')) {
    lVar1 = FUN_00f74230(&PTR_FUN_00f6bf08,CONCAT71(uVar2,1) & 0xffffffff,param_2,param_5);
  }
  else if ((cVar3 == '\x01') || (cVar3 == '\x02')) {
    lVar1 = FUN_00f70810(&PTR_FUN_00f6b230,CONCAT71(uVar2,1) & 0xffffffff,param_2,param_5);
  }
  else if (((((cVar3 == '\x03') || (cVar3 == '\x04')) || (cVar3 == '\x05')) ||
           ((cVar3 == '\v' || (cVar3 == '\f')))) || (cVar3 == '\r')) {
    lVar1 = FUN_00f711f0(&PTR_FUN_00f6b680,CONCAT71(uVar2,1) & 0xffffffff,param_2,param_5);
  }
  else if ((cVar3 == '\x06') || (cVar3 == '\a')) {
    lVar1 = FUN_00f73a20(&PTR_FUN_00f6bb18,CONCAT71(uVar2,1) & 0xffffffff,param_2,param_5);
  }
  else {
    lVar1 = 0;
  }
  *(undefined4 *)(lVar1 + 0x20) = param_3;
  *(undefined4 *)(lVar1 + 0x24) = param_4;
  *(undefined4 *)(lVar1 + 0x28) = param_3;
  *(undefined4 *)(lVar1 + 0x2c) = param_4;
  *(undefined4 *)(lVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  FUN_00f6e8e0(lVar1,param_5);
  return lVar1;
}

