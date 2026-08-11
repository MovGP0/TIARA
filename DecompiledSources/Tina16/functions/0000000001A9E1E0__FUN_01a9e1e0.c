/* Ghidra address: 01a9e1e0 */
/* Ghidra symbol: FUN_01a9e1e0 */


ulonglong FUN_01a9e1e0(undefined8 param_1,undefined4 param_2,double param_3,double param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  
  uVar7 = FUN_005fbf20();
  FUN_00b90650(0x406fe00000000000,(double)(uVar7 & 0xff) * param_3);
  bVar1 = FUN_0040c770();
  FUN_00b90650(0x406fe00000000000,(double)(uVar7 >> 8 & 0xff) * param_3);
  bVar2 = FUN_0040c770();
  FUN_00b90650(0x406fe00000000000,(double)(uVar7 >> 0x10 & 0xff) * param_3);
  bVar3 = FUN_0040c770();
  uVar7 = FUN_005fbf20(param_2);
  FUN_00b90650(0x406fe00000000000,(double)(uVar7 & 0xff) * param_4);
  bVar4 = FUN_0040c770();
  FUN_00b90650(0x406fe00000000000,(double)(uVar7 >> 8 & 0xff) * param_4);
  bVar5 = FUN_0040c770();
  FUN_00b90650(0x406fe00000000000,(double)(uVar7 >> 0x10 & 0xff) * param_4);
  bVar6 = FUN_0040c770();
  return (ulonglong)CONCAT12(bVar3 | bVar6,CONCAT11(bVar2 | bVar5,bVar1 | bVar4));
}

