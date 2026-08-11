/* Ghidra address: 0111ee30 */
/* Ghidra symbol: FUN_0111ee30 */


ulonglong FUN_0111ee30(longlong param_1,int param_2,char param_3,byte param_4)

{
  char cVar1;
  undefined8 unaff_R14;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  cVar1 = FUN_00be1ef0(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa0),param_2);
  if (cVar1 == param_3) {
    cVar1 = FUN_00be1ef0(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa0),
                         param_2 + -1);
    if ((param_4 & cVar1 != param_3) == 0) {
      FUN_00be12f0(*(undefined8 *)(param_1 + 0x98),param_2 + 1);
    }
    else {
      FUN_00be1b30(*(undefined8 *)(param_1 + 0x98),param_2 + 1,2,0xffffffff);
    }
  }
  else {
    cVar1 = FUN_00be1ef0(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa0),
                         param_2 + -1);
    if ((param_4 & cVar1 == param_3) == 0) {
      uVar2 = 0;
    }
    else {
      FUN_00be1b60(*(undefined8 *)(param_1 + 0x98),param_2 + 1,2,0xffffffff);
    }
  }
  return uVar2 & 0xffffffff;
}

