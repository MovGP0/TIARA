/* Ghidra address: 00b83e40 */
/* Ghidra symbol: FUN_00b83e40 */


ulonglong FUN_00b83e40(void)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 local_30 [16];
  
  FUN_0040d200(local_30,8,0);
  plVar3 = (longlong *)FUN_00b6cfe0(&PTR_FUN_00b83998,1,0);
  (**(code **)(*plVar3 + 0xa8))(plVar3,&DAT_01e93948,0x80,0);
  lVar1 = *plVar3;
  (**(code **)(lVar1 + 0x110))(plVar3,&DAT_01e93958,local_30);
  cVar2 = FUN_0043e2c0(local_30,&DAT_01e93958,8);
  (**(code **)(*plVar3 + 0x118))(plVar3,local_30,local_30);
  if (cVar2 == '\0') {
    cVar2 = FUN_0043e2c0(local_30,&DAT_01e93958,8);
    if (cVar2 != '\0') {
      uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      goto LAB_00b83ef6;
    }
  }
  uVar4 = 0;
LAB_00b83ef6:
  (**(code **)(*plVar3 + 0xb0))(plVar3);
  FUN_00410f20(plVar3);
  return uVar4 & 0xffffffff;
}

