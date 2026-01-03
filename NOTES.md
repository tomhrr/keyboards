## Notes

Some notes on keyboards I've used, including the motivations for
getting them, comments on setup/use, and things to watch out for.

 * [Summary](#summary)
 * [Keyboards](#keyboards)
    * [Keychron V4](#keychron-v4)
    * [Contra](#contra)
    * [Corne](#corne)
    * [Ferris Sweep](#ferris-sweep)

### Summary

### Keyboards

#### Keychron V4 (60%)

<img src="images/keychron-v4.jpg" width="50%" />

##### Motivations

 - I'd been using Apple Magic keyboards for a long time, but the newer
   iterations (circa early 2024) seemed to be having problems more
   often (e.g. keys not registering properly), and the repair process
   for these keyboards is tedious.  Although I had no previous
   experience with mechanical keyboards, they appeared to offer better
   repairability/longevity, as well as options for silent
   keys/switches (the only other real requirement here, due to office
   use).
 - At this time, I was a reasonably fast typist, and did not often
   look at the keyboard, but I was not a genuine touch-typist, and I
   also used the arrow keys all the time.

##### Setup/use

 - Setup was trivial.  The most time-consuming part of the process was
   finding a silent switch that didn't feel terrible.  I ended up
   settling on the TTC Silent Bluish Whites, which felt much better
   than the alternatives, though to be fair I did not try that many
   others.
 - For a short period of time before getting this keyboard, I had a
   Keychron V3 (TKL).  The travel distance was much greater than with
   the Apple keyboard, unsurprisingly, which in turn made moving my
   hand from the letters to the arrows more difficult/annoying.  That
   in turn prompted making an effort to transition to proper touch
   typing, and finding letter alternatives to the arrow keys (e.g.
   using hjkl in Vim), which was definitely worthwhile.  At that
   point, having the arrows was not useful, so I switched over to the
   V4 for the better portability (home and office).
 - While the silent switches were quiet enough for office use, the
   stabilisers in all the non-1U keys were still quite noisy.  The
   process of trying to silence the stabilisers was long and annoying.
   Some things were really helpful, like cutting off the stabiliser
   legs and lubricating the stabilisers, while others did not make
   much difference or had severe effects on the feel of the keys (e.g.
   holee mod).  Adding a large foam mat under the keyboard made a big
   difference with the residual stabiliser noise, though.
 - Blank keycaps were helpful in forcing touch typing.  Only after
   they were in place did I realise that I was looking at the keyboard
   more often than I had thought.

#### Contra

<img src="images/contra.jpg" width="50%" />

##### Motivations

 - The stabiliser noise with the Keychron V4 was not ideal, and
   spending more time on trying to solve that (e.g. by buying
   alternative stabilisers) did not seem very promising.  Having a
   keyboard with only 1U keys would solve the problem, though.
 - While the Keychron V4 was comfortable to use, the idea of a
   slightly smaller keyboard that got rid of the residual hand
   movement (for some of the middle number keys) was appealing.

##### Setup/use

 - I had no soldering experience before buying this keyboard.  At
   least with a Pinecil and 63/37 solder, the soldering process was
   very straightforward.  The controller was the trickiest part, but
   the J02 tip (curved) was very helpful with that part of it.
 - Putting 1.5mm of neoprene foam in the bottom of the case dampened
   the noise sufficiently that a desk mat was not needed anymore.
 - Switching to a 1U space key seemed like it would take some getting
   used to, but it turned out to be very easy to get the hang of it.
   In hindsight, anything larger now seems like an obvious and
   substantial layout inefficiency, particularly given how easy it is
   to use thumbs as opposed to pinkies.
 - There was a significant learning curve with the different key
   positioning, QMK layers, and so on.  It took about a month before
   WPM returned to a comfortable/tolerable level.
 - The Keychron V4 had Cherry keycaps, while this one has XDA keycaps.
   I found the XDA keycaps more comfortable, probably due to previous
   long experience with flat keyboards, in that it felt like less
   finger movement was required to move from one key to another when
   compared with the more sculpted Cherry keys.  The uniformity of the
   keys is also likely less of an issue when using a keyboard where
   your hands stay in one place the whole time.
 - I personally found the angles required for using it very
   uncomfortable after a couple of months, particularly on the left
   hand.  Although this is partly due to a preexisting wrist injury on
   that hand, printing out the layout and trying it first would have
   been a good idea.

#### Corne

<img src="images/corne.jpg" width="50%" />

##### Motivations

 - The angles required for using the Contra were problematic for me,
   and the Corne appeared to solve that problem, while preserving all
   the other positives of the Contra (i.e. no stabilisers, fewer
   keys).

##### Setup/use

 - Soldering the diodes was tricky, because they are so small, and
   accounted for most of the time spent assembling the keyboard.  By
   comparison, the hotswap sockets were trivial.  As with the Contra,
   the controllers were a little bit awkward, but not so much as the
   diodes.
 - Trying to use it without tenting was very uncomfortable.  The
   plastic case has tenting screws, but the threading was really not
   sufficient for stable tenting (possibly this would be fine with a
   metal case, though).  While there are lots of cheap ways to do
   tenting, the Ugreen magsafe stands (in the picture) were far and
   away the best tenting solution I tried.
 - With tenting in place, it was far more comfortable than the Contra.
 - At least for a wired version of the keyboard, the OLEDs appear to
   be present for the novelty factor only.

#### Ferris Sweep

<img src="images/ferris.jpg" width="50%" />

##### Motivations

 - While the Corne worked quite well, I ended up having to stop using
   the outer column in order to address wrist pain, and the travel
   distance meant that some slightly awkward hand movements were
   needed from time to time (even with average-sized hands).  Moving
   to a smaller, low-profile keyboard looked like a good option for
   addressing those problems.

##### Setup/use

 - Because there are so few keys, there are no diodes, so the
   soldering process here was very straightforward.
 - Up until this point, I'd been using the TTC Silent Bluish Whites,
   but there wasn't a similar option available in Choc V1.  I ended up
   getting the Ambient Twilights, and while they felt a little funny
   at first, it was easy enough to get used to them, and they feel
   great now.
 - The reduced travel distance and key spacing was a big benefit in
   terms of typing comfort.  The extra stagger on the pinky was
   helpful as well.
 - It's much smaller than the Corne, which was already pretty small,
   which helps with carrying it around.  It also helps with the
   tenting stands, because the magnetic ring can be placed more
   centrally, and also simply because they are lighter, which helps
   with stability (which was already pretty good with the Corne).
 - Having only two thumb keys on each hand meant that home row mods
   were a big help.  I'd avoided these previously because I'd assumed
   that their use always involves delay, but QMK's permissive hold
   solves this problem.  With that in place, they are a clear
   improvement over standalone keys.
 - The other issue with HRM was the inconsistency in behaviour between
   the HRM keys and the other keys on the default layer, in that the
   HRM keys took effect on release, while the others took effect on
   tap.  Simply making all keys on the default layer take effect on
   release 'solved' this problem, in that the consistency helped quite
   a bit with getting used to the different typing style required.
   This still took a while before it became comfortable, though
   (probably about a month).
 - The Pelican 1020 is a great carrying case for this keyboard.
