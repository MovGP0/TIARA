/* Ghidra address: 00a35740 */
/* Ghidra symbol: FUN_00a35740 */


void FUN_00a35740(longlong param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  undefined1 local_2c;
  byte local_2b;
  undefined1 local_2a;
  
  FUN_0040d200(param_1 + 0x29,0x100,0);
  *(undefined1 *)(param_1 + 0x28) = 1;
  lVar4 = FUN_00a33f40(param_1);
  cVar7 = *(char *)(lVar4 + 0x491);
  uVar5 = (undefined1)param_2;
  if (cVar7 == '\0') {
    FUN_00a33eb0(param_1,2);
    uVar3 = FUN_00a32f90(uVar5);
    *(undefined2 *)(param_1 + 0x29) = uVar3;
  }
  else {
    bVar1 = (byte)(param_2 >> 8);
    if (cVar7 == '\x02') {
      FUN_00a33eb0(param_1,6);
      uVar3 = FUN_00a32f90(uVar5);
      *(undefined2 *)(param_1 + 0x29) = uVar3;
      uVar3 = FUN_00a32f90((ulonglong)CONCAT12((char)(param_2 >> 0x18),(ushort)bVar1));
      *(undefined2 *)(param_1 + 0x2b) = uVar3;
      uVar3 = FUN_00a32f90(param_2 >> 0x10 & 0xff);
      *(undefined2 *)(param_1 + 0x2d) = uVar3;
    }
    else if (cVar7 == '\x03') {
      local_2c = (undefined1)(param_2 >> 0x10);
      cVar7 = *(char *)(lVar4 + 100);
      bVar6 = 0;
      local_2b = bVar1;
      local_2a = uVar5;
      do {
        cVar2 = FUN_0043e2c0(lVar4 + 0x6c + (ulonglong)bVar6 * 4,&local_2c,3);
        if (cVar2 != '\0') break;
        bVar6 = bVar6 + 1;
        cVar7 = cVar7 + -1;
      } while (cVar7 != '\0');
      FUN_0040d200(param_1 + 0x29,bVar6,0xff);
      FUN_00a33eb0(param_1,bVar6 + 1);
    }
  }
  return;
}

