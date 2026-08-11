/* Ghidra address: 012aedc0 */
/* Ghidra symbol: FUN_012aedc0 */


byte FUN_012aedc0(longlong param_1,double param_2)

{
  double local_38;
  byte local_29 [17];
  
  local_29[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xf8))
            (*(longlong **)(param_1 + 0xdb8),local_29,&local_38,1);
  while (((double)*(byte *)(param_1 + 0xd91) * local_38 < param_2 &&
         ((int)(uint)local_29[0] <= (int)(*(byte *)(param_1 + 0xd92) - 1)))) {
    local_29[0] = local_29[0] + 1;
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xf8))
              (*(longlong **)(param_1 + 0xdb8),local_29,&local_38,1);
  }
  return local_29[0];
}

