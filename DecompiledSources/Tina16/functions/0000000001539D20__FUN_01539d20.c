/* Ghidra address: 01539d20 */
/* Ghidra symbol: FUN_01539d20 */


void FUN_01539d20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9,undefined1 param_10)

{
  short sVar1;
  undefined8 *local_50 [8];
  
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((sVar1 != 0x3fe) && (sVar1 = (**(code **)(*param_1 + 0xf8))(param_1), sVar1 != 0x4b1)) {
    return;
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,4,local_50);
  *local_50[0] = param_2;
  FUN_01d3a010(local_50[0],3,param_2);
  (**(code **)(*param_1 + 0x2d0))(param_1,5,local_50);
  *local_50[0] = param_3;
  FUN_01d3a010(local_50[0],3,param_3);
  (**(code **)(*param_1 + 0x2d0))(param_1,0,local_50);
  *local_50[0] = param_4;
  FUN_01d3a010(local_50[0],3,param_4);
  (**(code **)(*param_1 + 0x2d0))(param_1,6,local_50);
  *(undefined1 *)local_50[0] = param_7;
  (**(code **)(*param_1 + 0x2d0))(param_1,7,local_50);
  *(undefined1 *)local_50[0] = param_8;
  (**(code **)(*param_1 + 0x2d0))(param_1,1,local_50);
  *local_50[0] = param_5;
  FUN_01d3a010(local_50[0],3,param_5);
  (**(code **)(*param_1 + 0x2d0))(param_1,2,local_50);
  *(undefined1 *)local_50[0] = param_9;
  (**(code **)(*param_1 + 0x2d0))(param_1,3,local_50);
  *(undefined1 *)local_50[0] = param_10;
  (**(code **)(*param_1 + 0x2d0))(param_1,8,local_50);
  *local_50[0] = param_6;
  FUN_01d3a010(local_50[0],3,param_6);
  return;
}

