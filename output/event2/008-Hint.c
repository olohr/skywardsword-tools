v o i d   e n t r y p o i n t _ n a m e d _ 0 0 8 _ 0 0 2 ( )   {  
 	 s t a r t ( )  
 	 p r i n t f ( " H e y ,   f r i e n d !   W a l k   y o u r s e l f   o n   o v e r \ n h e r e   a n d   s a y   h e l l o . " )  
 }  
  
 v o i d   e n t r y p o i n t _ n a m e d _ 0 0 8 _ 0 0 3 ( )   {  
 	 f l w _ 6 :  
 	 s t a r t ( )  
 	 i f   ( s t o r y _ f l a g s [ 2 2 6   0 x 0 0 E 2 ]   = =   t r u e )   {  
 	 	 g o t o   f l w _ 6  
 	 }  
 }  
  
 v o i d   e n t r y p o i n t _ n a m e d _ 0 0 8 _ 0 0 4 ( )   {  
 	 s t a r t ( )  
 	 i f   ( s t o r y _ f l a g s [ 2 2 6   0 x 0 0 E 2 ]   = =   t r u e )   {  
 	 	 f l w _ 8 :  
 	 	 s t a r t ( )  
 	 	 i f   ( s t o r y _ f l a g s [ 2 2 6   0 x 0 0 E 2 ]   = =   t r u e )   {  
 	 	 	 f l w _ 4 :  
 	 	 	 p r i n t f ( " N o   p r o b l e m .   I   h o p e   y o u   d o   w e l l ,   a n d \ n I   w i s h   y o u   g o o d   l u c k ! " )  
 	 	 }  
 	 }  
 }  
  
 v o i d   e n t r y p o i n t _ n a m e d _ 0 0 8 _ 0 0 5 ( )   {  
 	 f l w _ 0 :  
 	 s t a r t ( )  
 	 p r i n t f ( " H e y ,   h o w ' s   i t   g o i n g ?   I ' v e   g o t   a   n e w \ n h i n t   f o r   y o u !   W a n n a   s e e   i t ? \ n # # " )  
 	 i f   ( O r d e r e d D i c t ( [ ( ' t y p e ' ,   ' i f ' ) ,   ( ' s u b T y p e ' ,   6 ) ,   ( ' p a r a m 2 ' ,   0 ) ,   ( ' p a r a m 3 ' ,   0 ) ,   ( ' p a r a m 4 ' ,   2 ) ,   ( ' p a r a m 5 ' ,   0 ) ] ) )   {  
 	 	 g o t o   f l w _ 0  
 	 }  
 }  
  
 v o i d   e n t r y p o i n t _ n a m e d _ 0 0 8 _ 0 0 6 ( )   {  
 	 g o t o   f l w _ 8  
 }  
  
 v o i d   e n t r y p o i n t _ a n o n _ 0 ( )   {  
 	 f l w _ 2 :  
 	 s c e n e C h a n g e ( 6 2 ,   0 )   / /    
 }  
  
 v o i d   e n t r y p o i n t _ a n o n _ 1 ( )   {  
 	 g o t o   f l w _ 4  
 }  
  
 v o i d   e n t r y p o i n t _ a n o n _ 2 ( )   {  
 	 s c e n e C h a n g e ( 6 2 ,   0 )   / /    
 }  
  
 v o i d   e n t r y p o i n t _ a n o n _ 3 ( )   {  
 	 p r i n t f ( " N o   p r o b l e m .   I   h o p e   y o u   d o   w e l l ,   a n d \ n I   w i s h   y o u   g o o d   l u c k ! " )  
 }  
  
 v o i d   e n t r y p o i n t _ a n o n _ 4 ( )   {  
 	 p r i n t f ( " H e y a ,   f r i e n d . # # # # \ n   J u s t   s o   y o u   k n o w ,   I ' v e \ n g o t   e v e r y   h i n t   h e r e   r e a d y   f o r   y o u ! \ n W a n n a   s e e   a   h i n t ? \ n # # " )  
 	 f l w _ 9 :  
 	 i f   ( O r d e r e d D i c t ( [ ( ' t y p e ' ,   ' i f ' ) ,   ( ' s u b T y p e ' ,   6 ) ,   ( ' p a r a m 2 ' ,   0 ) ,   ( ' p a r a m 3 ' ,   0 ) ,   ( ' p a r a m 4 ' ,   2 ) ,   ( ' p a r a m 5 ' ,   2 ) ] ) )   {  
 	 	 g o t o   f l w _ 2  
 	 }  
 }  
  
 v o i d   e n t r y p o i n t _ a n o n _ 5 ( )   {  
 	 p r i n t f ( " W h a t ' s   u p ? # # # # \ n   I   d o n ' t   h a v e   a n y   i m p o r t a n t \ n h i n t s   f o r   y o u ,   b u t   I ' l l   l e t   y o u   s e e   a n y \ n h i n t s   y o u ' v e   s e e n   u p   t i l l   n o w .   W a n n a \ n s e e   s o m e   h i n t s ? \ n # # " )  
 	 g o t o   f l w _ 9  
 }  
  
 v o i d   e n t r y p o i n t _ a n o n _ 6 ( )   {  
 	 p r i n t f ( " H o w   d o   y o u   d o ?   I ' m   w h a t   y o u   c a l l   a \ n # " )  
 }  
  
 v o i d   e n t r y p o i n t _ a n o n _ 7 ( )   {  
 	 p r i n t f ( " H o w   d o   y o u   d o ?   I ' m   w h a t   y o u   c a l l   a \ n # " )  
 }  
  
 v o i d   e n t r y p o i n t _ a n o n _ 8 ( )   {  
 	 O r d e r e d D i c t ( [ ( ' t y p e ' ,   ' t y p e 3 ' ) ,   ( ' s u b T y p e ' ,   1 ) ,   ( ' p a r a m 1 ' ,   8 ) ,   ( ' p a r a m 2 ' ,   6 ) ,   ( ' n e x t ' ,   - 1 ) ,   ( ' p a r a m 3 ' ,   7 ) ] )  
 }  
  
 v o i d   e n t r y p o i n t _ a n o n _ 9 ( )   {  
 	 p r i n t f ( " H e y   t h e r e ,   f r i e n d . # # # # \ n   U n f o r t u n a t e l y , \ n y o u ' r e   s u c h   a   g o o d   e x p l o r e r   t h a t   I   d o n ' t \ n h a v e   a n y   h i n t s   t o   o f f e r   y o u   r i g h t   n o w . \ n \ n T e l l   y o u   w h a t .   Y o u   p r e s s   o n ,   a n d   i f   y o u \ n f i n d   y o u r s e l f   s t u c k   l a t e r ,   j u s t   c o m e   o n \ n b a c k   a n d   s e e   m e . " )  
 }  
  
 