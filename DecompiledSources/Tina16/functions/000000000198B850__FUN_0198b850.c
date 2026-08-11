/* Ghidra address: 0198b850 */
/* Ghidra symbol: FUN_0198b850 */


void FUN_0198b850(longlong param_1,undefined8 *param_2,undefined8 param_3,ushort param_4)

{
  longlong lVar1;
  undefined1 local_118 [264];
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01d312f0(*param_2,&local_10);
  FUN_00416910(local_118,local_10,0xff);
  FUN_00415020(param_1 + 0x242,local_118,0x50);
  if (param_4 < 0x11) {
    *(undefined2 *)(param_1 + 0x368) = 1;
    *(undefined2 *)(param_1 + 0x36a) = 0xffff;
    FUN_012beda0(*(undefined8 *)(param_1 + 0xd8),0);
    lVar1 = FUN_012bedf0(*(undefined8 *)(param_1 + 0xd8),0);
    *(uint *)(lVar1 + 0xc) = (uint)*(ushort *)(param_1 + 0x36a);
  }
  else {
    FUN_01d30f00(*param_2,param_1 + 0x368,2);
    FUN_01d30f00(*param_2,param_1 + 0x36a,2);
    if (param_4 < 0x12) {
      FUN_012beda0(*(undefined8 *)(param_1 + 0xd8),0);
      lVar1 = FUN_012bedf0(*(undefined8 *)(param_1 + 0xd8),0);
      *(uint *)(lVar1 + 0xc) = (uint)*(ushort *)(param_1 + 0x36a);
    }
    else {
      FUN_012bef60(*(undefined8 *)(param_1 + 0xd8),*param_2,param_4);
      lVar1 = *(longlong *)(param_1 + 0xd8);
      if (*(int *)(lVar1 + 0x10) == 0) {
        FUN_012beda0(lVar1,0);
        lVar1 = FUN_012bedf0(*(undefined8 *)(param_1 + 0xd8),0);
        *(uint *)(lVar1 + 0xc) = (uint)*(ushort *)(param_1 + 0x36a);
      }
      else {
        lVar1 = FUN_012bedf0(lVar1,0);
        *(undefined2 *)(param_1 + 0x36a) = *(undefined2 *)(lVar1 + 0xc);
      }
    }
  }
  if (0x12 < param_4) {
    FUN_01d30f00(*param_2,param_1 + 0xe0,2);
    FUN_01d30f00(*param_2,param_1 + 0xe2,2);
    FUN_01d30f00(*param_2,param_1 + 0xe8,8);
  }
  if (0x13 < param_4) {
    FUN_01d312f0(*param_2,&local_10);
    FUN_00416910(local_118,local_10,0xff);
    FUN_00415020(param_1 + 0x293,local_118,200);
    FUN_01d30f00(*param_2,param_1 + 0x35c,4);
  }
  if (0x14 < param_4) {
    FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0x3b0));
  }
  if (0x15 < param_4) {
    FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0x438));
  }
  if (0x17 < param_4) {
    FUN_01d316c0(*param_2,param_1 + 0xe68);
  }
  FUN_00414480(&local_10);
  return;
}

