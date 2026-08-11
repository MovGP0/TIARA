/* Ghidra address: 00df0340 */
/* Ghidra symbol: FUN_00df0340 */


void FUN_00df0340(undefined8 param_1,longlong param_2)

{
  double dVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined2 local_60 [4];
  undefined8 local_58;
  undefined8 local_50;
  
  if (*(char *)(param_2 + 0x339) == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = FUN_016eacf0(param_1,6,4);
  }
  uVar6 = FUN_016eb0a0(param_1,3);
  if (bVar2 < 3) {
    if (bVar2 == 2) {
      FUN_016e9e20(param_1,1);
      FUN_016ebdd0(param_1,1,1,2,1);
      FUN_016ed320(param_1,1,0,0,0);
      return;
    }
    if (bVar2 != 0) {
      if (bVar2 != 1) {
        return;
      }
      FUN_016e9e20(param_1,1);
      FUN_016ebe60(param_1,1,1,2,1);
      FUN_016ed320(param_1,1,0,0,0);
      return;
    }
  }
  else if ((bVar2 != 3) && (bVar2 != 0x10)) {
    return;
  }
  lVar4 = FUN_01b05ad0(param_1,2,0,&local_61,&local_62,&local_63);
  if ((local_63 == '\v') && (*(char *)(lVar4 + 2) != '\0')) {
    dVar1 = *(double *)(lVar4 + 0xb);
    FUN_016e9e20(param_1,4);
    cVar3 = FUN_016e9d10(param_1,2);
    FUN_016ec240(param_1,1,cVar3 + '\x02',2);
    FUN_016ed5d0(param_1,1,0,0,0,uVar6,0);
    cVar5 = cVar3 + '\x01';
    FUN_016ec420(param_1,2,cVar5,2,1,2,1);
    uVar7 = 0;
    FUN_016ed320(param_1,2,0,0x3ff0000000000000,0);
    FUN_016ebe60(param_1,3,cVar5,cVar3 + '\x02',uVar7 & 0xffffffffffffff00);
    FUN_016ed320(param_1,3,0,0x3f50624dd2f1a9fc,0);
    FUN_016ebfa0(param_1,4,cVar5,2,1);
    FUN_016ed220(param_1,4,1.0 / (dVar1 * 6283.185307179586),0);
  }
  else {
    FUN_016e9e20(param_1,1);
    FUN_016ec240(param_1,1,1,2);
    FUN_016ed5d0(param_1,1,0,0,0,uVar6,0);
  }
  local_58 = 0;
  local_50 = uVar6;
  local_60[0] = FUN_016ea1b0(param_1,2);
  FUN_016ea050(param_1,local_60,0x18);
  FUN_016e9f40(param_1,FUN_00df00f0);
  FUN_016ea000(param_1,FUN_00deff70);
  FUN_016e9ff0(param_1,FUN_00def650);
  FUN_016ea040(param_1,FUN_00def830);
  return;
}

