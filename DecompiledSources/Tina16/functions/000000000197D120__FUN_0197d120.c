/* Ghidra address: 0197d120 */
/* Ghidra symbol: FUN_0197d120 */


longlong FUN_0197d120(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_0197d280(&DAT_01941250,1);
  FUN_0197d5f0(lVar1,param_2);
  *(longlong *)(lVar1 + 8) = param_1;
  *(longlong *)(lVar1 + 0x30) = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
            (*(longlong **)(param_1 + 0x10),param_2,lVar1);
  if (param_3 != 0) {
    FUN_0197d750(param_1,1);
  }
  lVar2 = FUN_0197d570(param_1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x50) != 0)) {
    (**(code **)(lVar2 + 0x50))(*(undefined8 *)(lVar2 + 0x58),param_2,0,param_3);
  }
  return lVar1;
}

